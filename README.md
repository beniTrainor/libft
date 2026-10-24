# Libft

*Este proyecto ha sido creado como parte del currículo de 42 por btrainor*.

## Descripción

Libft es un proyecto del currículo de 42 cuyo objetivo es desarrollar una
librería propia en C mediante la reimplementación de funciones de la biblioteca
estándar y la creación de funciones auxiliares para la manipulación de cadenas
de caracteres, memoria y listas enlazadas.

El proyecto permite profundizar en conceptos fundamentales de C, como el uso de
punteros, la gestión dinámica de memoria, el tratamiento de bytes y las
estructuras de datos.

La librería resultante, `libft.a`, es una librería estática que agrupa los
archivos objeto generados a partir de las funciones implementadas. Puede
reutilizarse en otros proyectos de C.

## Contenido de la librería

### Funciones de la biblioteca estándar de C

Reimplementaciones de funciones habituales para trabajar con caracteres, cadenas de caracteres y memoria.

- **Comprobación y conversión de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper` y `ft_tolower`.
- **Manipulación de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr` y `ft_memcmp`.
- **Manipulación de cadenas:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp` y `ft_strnstr`.
- **Conversión y gestión de memoria dinámica:** `ft_atoi`, `ft_calloc` y `ft_strdup`.

### Funciones adicionales

Funciones auxiliares para manipular cadenas de caracteres, transformar datos y escribir en descriptores de archivo.

- **Manipulación de cadenas:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi` y `ft_striteri`.
- **Conversión de números:** `ft_itoa`.
- **Salida mediante descriptores de archivo:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd` y `ft_putnbr_fd`.

### Funciones de listas enlazadas

Funciones para crear, recorrer, modificar y liberar listas enlazadas mediante
la estructura `t_list`.

- **Creación y consulta:** `ft_lstnew`, `ft_lstsize` y `ft_lstlast`.
- **Inserción de elementos:** `ft_lstadd_front` y `ft_lstadd_back`.
- **Eliminación y liberación:** `ft_lstdelone` y `ft_lstclear`.
- **Recorrido y transformación:** `ft_lstiter` y `ft_lstmap`.

## Instrucciones

La compilación de las funciones para generar la librería y los archivos objetos
individuales se consigue con el comando:
```
make
```

Para eliminar los archivos objeto generados con `make` se puede ejecutar el comando:
```
make clean
```

Y para eliminar todos los archivos generados:
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
```c
#include "libft.h"
```
y el comando a ejecutar en la shell sería:
```bash
$ cc -Wall -Wextra -Werror file.c libft.a -o programa
$ ./programa
```

## Recursos

### Referencias

- Páginas de manual de las funciones de C (`man nombre_funcion`)
- Repositorios de GitHub de proyectos de libft completados:
	- [AlBektur's libft](https://github.com/AlBektur/libft)
	- [AliS2018's libft](https://github.com/AliS2018/common-core_42/tree/main/libft)
	- [apphinha's libft](https://github.com/appinha/42cursus-00-Libft/)
- Artículos y documentación web:
  - [Void Pointer in C](https://www.geeksforgeeks.org/c/void-pointer-c-cpp/)
  - [memmove() in C/C++](https://www.geeksforgeeks.org/cpp/memmove-in-cc/)
  - [INT_MAX and INT_MIN](https://www.geeksforgeeks.org/cpp/int_max-int_min-cc-applications/)
  - [Unsigned char in C](https://www.geeksforgeeks.org/c/unsigned-char-in-c-with-examples/)
  - [Makefile in C](https://www.geeksforgeeks.org/cpp/makefile-in-c-and-its-applications/)
  - [How to Initialize Structures in C](https://www.geeksforgeeks.org/c/how-to-initialize-structures-in-c/)
  - [Linked list](https://en.wikipedia.org/wiki/Linked_list)

### Uso de IA

Se ha utilizado ChatGPT como herramienta de apoyo durante el desarrollo del
proyecto para resolver dudas conceptuales y comprender mejor determinados
aspectos del lenguaje C.

Los usos principales han sido:

- **Punteros y memoria**: aclaración de conceptos relacionados con los punteros
  `void *`, la manipulación de bytes y la gestión de memoria.
- **Listas enlazadas**: resolución de dudas sobre la estructura y el funcionamiento
  de las listas enlazadas.
- **Casos límite**: análisis de situaciones particulares y posibles casos extremos
  en determinadas funciones.
- **Comprensión del código**: apoyo para entender comportamientos específicos de C
  y contrastar posibles soluciones.

La IA se ha utilizado como recurso de consulta y aprendizaje durante la
implementación y depuración de las funciones.

### Herramientas de prueba

- Tests propios: [test-libft](https://github.com/beniTrainor/test-libft), para
  comprobar el comportamiento de las funciones implementadas.
- Tests externos: [libftTester](https://github.com/Tripouille/libftTester),
  para contrastar las implementaciones con una batería adicional de pruebas.
- **Valgrind:** herramienta para detectar fugas de memoria y accesos inválidos.
- **GDB:** depurador para examinar la ejecución del programa e investigar errores.
