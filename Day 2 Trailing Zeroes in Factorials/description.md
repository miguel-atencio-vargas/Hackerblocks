- <img src="https://latex.codecogs.com/gif.latex?O_t=\text { Onset event at time bin } t " /> 
- <img src="https://latex.codecogs.com/gif.latex?s=\text { sensor reading }  " /> 
- <img src="https://latex.codecogs.com/gif.latex?P(s | O_t )=\text { Probability of a sensor reading value when sleep onset is observed at a time bin } t " />
```
# [Day 2 - Problem Solving - Trailing Zeroes in Factorials](https://online.codingblocks.com/app/player/92078/content/80922/7748)
Dado un número entero $n$, escriba una función que devuelva la cantidad  de ceros finales en $(n)!$
Condiciones:   $1 <= n <= 10^9$
Este ejercicio puede tener dos aproximaciones dependiendo de el tamaño de la entrada: 

 1. Naive aproach
Inicialmente se podría calcular el factorial de ese numero (independientemente del método) y de ese calculo realizar divisiones sucesivas por 10 hasta obtener un modulo diferente de $0$.
**Primero generaremos los factoriales del 1 al 36
```python
import math
for i in range(1,36):
    n = math.factorial(i)
    print(i,'! = ', n)

```
![](https://i.imgur.com/237or29.png)

La solucion seria al problema seria:
```python
import math
n = int(input())
n = math.factorial(n)
c = 0
while(n % 10 == 0):
    n = n//10
    c +=1
print(c)
```
> El método anterior puede causar el desbordamiento de un número
> ligeramente mayor, ya que el factorial de un número es un número
> grande.

 **2. [Factores Primos](http://en.wikipedia.org/wiki/Prime_factor)**
 El  [teorema fundamental de la aritmética](https://es.wikipedia.org/wiki/Teorema_fundamental_de_la_aritm%C3%A9tica "Teorema fundamental de la aritmética")  establece que todo número natural tiene una representación única como producto de factores primos, salvo el orden. Un mismo factor primo puede aparecer varias veces. El 1 se representa entonces como un producto vacío.
Se puede considerar que los números primos son los «ladrillos» con los que se construye cualquier número natural. Por ejemplo, se puede escribir el número $23.244$ como producto de $223·13·149$, y cualquier otra factorización del $23.244$ como producto de números primos será idéntica excepto por el orden de los factores.
 La idea es considerar los factores primos de un factorial $n$. Un cero final siempre se produce por los factores primos 2 y 5. Si podemos contar el número de 5s y 2s, nuestra tarea está hecha. Considere los siguientes ejemplos:
> $n = 5$: Hay un 5 y 3 dos en factores primos de $5!= (2^3 * 5)$ Entonces, el recuento de ceros al final es 1.
> $n = 11$: Hay dos 5 y ocho 2 en factores primos de $11! = (2^8 * 3^4 * 5^2 * 7)$ Entonces, el recuento de ceros al final es 2.
Nota: el recuento de ceros necesita que ambos números sean iguales.

Podemos observar fácilmente que el número de 2 en los factores primos siempre es $>=  5$. Entonces, si contamos 5s en factores primos, hemos terminado. ¿Cómo contar el número total de 5 en factores primos de n? Una forma simple es calcular el piso (n / 5). Por ejemplo, 7! tiene uno 5, 10! Tiene dos 5s. Ya está hecho, hay una cosa más a considerar. Los números como 25, 125, etc. tienen más de un 5. Por ejemplo, si consideramos 28 !, obtenemos un 5 adicional y el número de 0 se convierte en 6. Manejar esto es simple, primero divida n entre 5 y elimine todos los 5 únicos, luego dividir entre 25 para eliminar 5s adicionales y así sucesivamente. A continuación se presenta la fórmula resumida para contar los ceros finales.

<!--stackedit_data:
eyJoaXN0b3J5IjpbMzEyMjQ5NjI4LDEwMjUwMDk3NjQsLTE2Nz
gxNzUyNjAsNjYyNTMyNjAwXX0=
-->