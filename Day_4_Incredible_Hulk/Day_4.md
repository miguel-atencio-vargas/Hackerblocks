
# [Day 004 Incredible Hulk](https://hack.codingblocks.com/app/practice/6/1038/problem)

Descripcion del problema:
El planeta Tierra está bajo la amenaza de los extraterrestres del espacio exterior y el equipo de los Vengadores está ocupado luchando contra ellos. Mientras tanto, Hulk tiene que derrotar a un enemigo que está a N pasos por encima del nivel en el que está parado (asuma el nivel de Hulk como el nivel 0). Hulk, debido a su increíble capacidad de salto, puede dos niveles. Para derrotar al enemigo lo más rápido posible, tiene que alcanzar el enésimo paso con el mínimo de movimientos posibles. Ayuda a Hulk a encontrar lo mismo y contribuye a salvar a la Tierra.

#### Formato de entrada 

La primera línea contiene el número de casos de prueba T. 

Los siguientes casos de prueba T: La primera línea de cada caso de prueba contiene un número N. 

#### Restricciones

1 <= T <= 10  
1 <= N <= 10^5

#### Formato de salida 

Líneas T de salida, que contienen el número mínimo de movimientos requeridos por Hulk para alcanzar el enésimo paso.

#### Entrada de muestra
> 3
>3
>4
>5
#### Salida de muestra
> 2
> 1
> 2
#### Explicación

Deje que los pasos totales sean n, encuentre el número entero más cercano que sea de potencia 2 y menor que n. deje que se sepa que los pasos restantes para cubrir son n-k y resultado = 1 + pasos min para los pasos restantes (n-k).



### Enfoque del problema
Para poder solucionar este ejercicio se utilizara un enfoque de **Operar a nivel de bits**. Para ello trataremos de encotrar el numero de conjuntos de bits:

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTMxOTg4NDA4OCwtMTU3MDUzNzY1NiwtMT
IwNjkwMTI5NSw3MzA5OTgxMTZdfQ==
-->