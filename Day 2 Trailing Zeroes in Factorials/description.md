# [Day 2 - Problem Solving - Trailing Zeroes in Factorials](https://online.codingblocks.com/app/player/92078/content/80922/7748)
Dado un número entero n, escriba una función que devuelva la cantidad  de ceros finales en n!

Condiciones:   1 <= n <= 10^9
Este ejercicio puede tener dos aproximaciones dependiendo de el tamaño de la entrada: 

 **1. Naive aproach**
 
Inicialmente se podría calcular el factorial de ese numero (independientemente del método) y de ese calculo realizar divisiones sucesivas por 10 hasta obtener un modulo diferente de 0.

**Primero generaremos los factoriales del 1 al 36**
```python
import math
for i in range(1,36):
    n = math.factorial(i)
    print(i,'! = ', n)

```
![](https://i.imgur.com/237or29.png)

La solución seria al problema seria:
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
Se puede considerar que los números primos son los «ladrillos» con los que se construye cualquier número natural. Por ejemplo, se puede escribir el número 23.244 como producto de 223·13·149, y cualquier otra factorización del 23.244 como producto de números primos será idéntica excepto por el orden de los factores.

La idea es considerar los factores primos de un factorial n. Un cero al final siempre se produce por los factores primos 2 y 5 ( y también sus múltiplos como 10 pero solo consideramos sus factores atómicos). Ej:

    10! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800

Si podemos contar el número de 5's y 2's, nuestra tarea está hecha. Considere los siguientes ejemplos:
> n = 5: Hay un 5 y 3 dos en factores primos de 5!= (2³ * 5) Entonces, el recuento de ceros al final es 1.

> n = 11: Hay dos 5 y ocho 2 en factores primos de 11! = (2⁸ * 3⁴ * 5² * 7)
> Entonces, el recuento de ceros al final es 2.
> 
>Nota: el recuento de ceros necesita que ambos números sean iguales.

Podemos observar fácilmente que el número de 2 en los factores primos siempre es mayor igual a  5. **Entonces, si contamos los 5's en factores primos, hemos terminado.**

**¿Cómo contar el número total de 5 en factores primos de n?** 

Una forma simple es calcular: `floor(n / 5)`

Por ejemplo para:

* n = 100 `floor(100 / 5) = 20`  luego elevamos 5:  `floor(20 / 5²) = 20`

```c++
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int N, c = 0, e = 1, form;
    cin>>N;
    while(true){
        form = floor(N/pow(5, e));
        if(form == 0) break;
        c+=form;
        e++;
    }
    cout<<c<<endl;
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE4NTA3MjM5ODMsLTY0ODE4MjUyMSwtMT
AwNTg4MTcyLDU4MjUzOTkyMSwzMjQ1OTk0NzUsLTk1OTYyODI5
OCwxMDI1MDA5NzY0LC0xNjc4MTc1MjYwLDY2MjUzMjYwMF19
-->