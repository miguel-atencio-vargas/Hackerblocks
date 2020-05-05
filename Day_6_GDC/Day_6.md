

# [Day 6 - Euclid's Algorithm for GCD | HCF & LCM](https://online.codingblocks.com/app/player/92078/content/80922/7751)

Tome lo siguiente como entrada. 

Un número (N1)

 Un número (N2)

Escriba una función que devuelva el Maximo Comun Divisor de N1 y N2. Imprime el valor devuelto.

### Formato de entrada 

Dos enteros separados por una nueva línea. 

### Restricciones 

    0 <N1 <1x10⁹ 0 <N2 <1x10⁹

### Entrada de muestra 
> 16 
> 24 
### Salida de muestra 
> 8
## Analisis de del ejercicio
Partamos de lo mas basico, un ** divisor ** es el conjunto de numeros por el cual es divisble un numero. Ej: 
|15| 20 |6|18|Divisores
|--|--|--|--|--|
| 1 x 15| 1x20 |1x6 |1x18|**1, 15,**
|3 x 5|2x10|2x3|2x9
|	   |4x5||3x6

|N°|  |||Divisores
|--|--|--|--|--|
| 15 |1x15  |3x5||1,3,5,15
| 20 | 1x20 | 2x10|4x5|1,2,4,5,10,
| 6 | 1x6 | 2x3
| 18 | 1x18 |2x9|3x6

Como se puede observar cada numero tiene un con

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTA2NjcwNTY5NiwyMDc4MTAzNzg1XX0=
-->