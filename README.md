# Libft

*Este proyecto ha sido creado como parte del currículo de 42 por btrainor*.

## Descripción

Este proyecto consiste en reimplementar funciones estándar de C para entender
su funcionamiento interno, los argumentos que aceptan y los valores que
devuelven. También incluye funciones adicionales para manipular strings y
listas enlazadas estándar con listas enlazadas.

Todas las funciones han sido implementadas por separado y donde posible han
sido reusadas en otras para evitar repetir código.

El producto final es una librería estática, llamada `libft.a`, que contiene
todos los archivos objeto compilados correspondientes a cada una de las
funciones.


## Instrucciones

La compilación de las funciones para generar la librería y los archivos objetos
individuales se consigue con el comando:
```
make
```

Para limpiar los archivos objeto generados con `make` se puede ejecutar el comando:
```
make clean
```

Y para limpiar el directorio:
```
make fclean
```

En caso de hacer modificaciones a un archivo y querer recompilar se puede hacer:
```
make re
```

## Ejemplos de uso

Una vez compilada, la librería puede utilizarse junto con archivos C incluyendo
el header correspondiente y compilando el nombre de librería en el comando de
compilación.

En los archivos C el header a añadir sería:
```
#include "libft.h"
```
y el comando a ejecutar en la shell sería:
```
$ cc -Wall -Werror -Wextra file.c libft.a
```

## Recursos

### Referencias

- Manuales *man* de Linux correspondientes a cada función (`man <function>`).
- Documento PDF de 42 sobre el proyecto libft.
- Recursos web: artículos de GeeksForGeeks, Wikipedia
	- conceptos como punteros void, gestión de bytes de memoria y Makefile
		- https://www.geeksforgeeks.org/c/void-pointer-c-cpp/
		- https://www.geeksforgeeks.org/cpp/memmove-in-cc/
		- https://www.geeksforgeeks.org/cpp/int_max-int_min-cc-applications/
		- https://www.geeksforgeeks.org/c/unsigned-char-in-c-with-examples/
		- https://www.geeksforgeeks.org/cpp/makefile-in-c-and-its-applications/
		- https://www.geeksforgeeks.org/c/how-to-initialize-structures-in-c/
		- https://en.wikipedia.org/wiki/Linked_list
- Repositorios de GitHub de proyectos de libft completados y librería de tests
	- https://github.com/AlBektur/libft

### Uso de IA

- ChatGPT para resolver dudas, como los punteros void, listas enlazadas, casos extremos de funcionesconcretas

### Herramientas de prueba

- My repository de tests: [http://github.com/beniTrainor/test-libft](http://github.com/beniTrainor/test-libft)
- [libftTester](https://github.com/Tripouille/libftTester): un repositorio con muchos tests con mucha cobertura de casos para cada función
- valgrind: herramienta para detectar fugas de memoria y lectura y escritura válida de memoria
