

# [Day 6 - Euclid's Algorithm for GCD Maximo Comun Divisor | HCF Máximo Factor Común & LCM Mínimo Común Múltiplo](https://online.codingblocks.com/app/player/92078/content/80922/7751)
### Descripcion
Tome lo siguiente como entrada. 

Un número (N1)

 Un número (N2)

Escriba una función que devuelva el Maximo Comun Divisor de N1 y N2. Imprime el valor devuelto.

### Formato de entrada 

Dos enteros separados por una nueva línea. 

### Restricciones 

    0<N1<1x10⁹ |  0<N2<1x10⁹

### Entrada de muestra 
> 16 
> 24 
### Salida de muestra 
> 8
## Análisis de del ejercicio
Partamos de lo mas básico, un **divisor** es el conjunto de números por el cual es divisible un número. Ej: 
|N°|  ||||Divisores
|--|--|--|--|--|--|
| 15 |1x15 | |3x5||1, 3, 5, 15
| 20 | 1x20 | 2x10||4x5|1, 2, 4, 5, 10, 20
| 6 | 1x6 | 2x3|||1, 2, 3, 6
| 18 | 1x18 |2x9|3x6||1, 2, 3, 6, 18
|12|1x12|2x6|3x4||1, 2, 3, 4, 6, 12

Como se puede observar cada numero tiene un conjunto de divisores(que son divisibles por el numero). De aquí podemos extraer intuitivamente de que significa el Maximo Comun Divisor ya que si por ejemplo quiero el MCD de 15, 20 solo tengo que multiplicar los *Divisores comunes de tiene cada numero:*

    MCD(15,20) = MAX(1, 5) = 5
    
    MCD(18,12) = MAX(2, 3, 6) = 6
   
Esta forma seria la mas larga de obtener el MCD pero también podemos aplicar bajo la misma idea con los **factores primos** solo que ahora en ves de considerar a todos los elementos solo consideramos a los números primos:

    MCD(18,12) = 2 * 3 = 6
   
> La idea detrás es encontrar el número más grande que los divide a ambos.
## Algoritmo Euclidiano
 Este algoritmo se basa en dos reglas principales:

1. `MCD(a,b) = MCD(b, a%b) // Caso recursivo`
2. `MCD(a,0) = a 		  // Caso base`

En la primera regla nos dice que operemos recursivamente hasta que `b==0` 
Y la segunda nos dice que cuando `b==0` hemos encontrado la respuesta.
Por ejemplo para 12, 20:

![GDC DEMOSTRATION](https://i.imgur.com/g1MxzIu.jpg)

Cuando nos planteamos algoritmos recursivos es muy útil verlo como una `Pila de llamadas o Call Stack` a continuación veremos como se desarrollaría para el mismo ejemplo:
![Call Stack](https://i.imgur.com/PcEiVVF.png)

Con todo esto podemos plantear el siguiente código:
```c++
#include <bits/stdc++.h> 
using namespace std; 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a%b); 
} 
int main(){ 
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0; 
} 
```
## Minimo Comun Multiplo
El mcm o LCM es el múltiplo común de todos ellos (o el ínfimo del conjunto de los múltiplos comunes). Partiendo de dos o más números y por descomposición en factores, expresados como producto de factores primos, su mínimo común múltiplo será el resultado de multiplicar todos los factores comunes y no comunes elevados a la mayor potencia, por ejemplo el mcm de 72 y 50 será:
![enter image description here](https://wikimedia.org/api/rest_v1/media/math/render/svg/1bad3a73c95c4a7ad1c8c29fd05ceb78b414cc3a) 
![enter image description here](https://wikimedia.org/api/rest_v1/media/math/render/svg/1130c12dc1f0223f78054b258ff24746780a8884)

Tomando los factores con su mayor exponente, tenemos que:

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/295754bdd6d31ff598085741aa1dd8d34456b5a6)

Conociendo el máximo común divisor Máximo Común Divisor de dos números, se puede calcular el mínimo común múltiplo de ellos, que será el producto de ambos dividido entre su máximo común divisor.

![enter image description here](https://wikimedia.org/api/rest_v1/media/math/render/svg/0b84c2f7b755f01c833131e91e8d3999a5ffa8eb)
 
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTc0OTAzNzQ4NSwxMTg1MzQxOTY0LDE5MD
k3MTg1MjYsMTE3NjAwNDIzMCwxMTg0NTI4NTY3LDE2ODY3NDE0
ODEsOTMyNjEyNTU4LDc4MDA3NTQ0NywtMTQ5MjMzMTAxOCwtMT
Q2NjMxMjY0MSwxODUwNzkzNDkxLC0xMTUxMDUzNDM3LC05ODI4
MDMwODEsMTI4MTcwNTA3NSwyMDc4MTAzNzg1XX0=
-->