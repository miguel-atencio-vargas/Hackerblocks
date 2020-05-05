

# [Day 6 - Euclid's Algorithm for GCD Maximo Comun Divisor | HCF Maximo Factor Comun & LCM](https://online.codingblocks.com/app/player/92078/content/80922/7751)

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
## Analisis de del ejercicio
Partamos de lo mas basico, un **divisor** es el conjunto de numeros por el cual es divisble un numero. Ej: 
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
 

1. `MCD(a,b) = MCD(b, a%b)`
2. `MCD(a,0) = a`

En la primera regla nos dice que operemos recursivamente hasta que `b==0` 
Y la segunda nos dice que cuando `b==0` hemos encontrado la respuesta.
Por ejemplo para 12, 20:
![GDC DEMOSTRATION](https://i.imgur.com/g1MxzIu.jpg)


<!--stackedit_data:
eyJoaXN0b3J5IjpbNzgwMDc1NDQ3LC0xNDkyMzMxMDE4LC0xND
Y2MzEyNjQxLDE4NTA3OTM0OTEsLTExNTEwNTM0MzcsLTk4Mjgw
MzA4MSwxMjgxNzA1MDc1LDIwNzgxMDM3ODVdfQ==
-->