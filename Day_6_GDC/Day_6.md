

# [Day 6 - Euclid's Algorithm for GCD | HCF & LCM](https://online.codingblocks.com/app/player/92078/content/80922/7751)

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
Partamos de lo mas basico, un ** divisor ** es el conjunto de numeros por el cual es divisble un numero. Ej: 
|N°|  |||Divisores
|--|--|--|--|--|
| 15 |1x15  |3x5||1, 3, 5, 15
| 20 | 1x20 | 2x10|4x5|1, 2, 4, 5, 10, 20
| 6 | 1x6 | 2x3||1, 2, 3, 6
| 18 | 1x18 |2x9|3x6|1, 2, 3, 6, 18

Como se puede observar cada numero tiene un conjunto de divisores(que son divisibles por el numero). De aquí podemos extraer intuitivamente de que significa el Maximo Comun Divisor ya que si por ejemplo quiero el MCD de 15, 20 solo tengo que multiplicar los *Divisores comunes de tiene cada numero:*

    MCD(15,20) = 1*5 = 5
   

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTI4MTcwNTA3NSwyMDc4MTAzNzg1XX0=
-->