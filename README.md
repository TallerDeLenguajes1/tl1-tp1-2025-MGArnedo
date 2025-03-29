[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# .gitignore
El archivo .gitignore es **utilizado para especificar patrones de archivos que Git debe ignorar**, es decir, no debe tener en cuenta en el control de versiones. Es conveniente incluirlo en un repositorio cuando se desea evitar que archivos no deseados se incluyan en los commits, como archivos temporales, logs, archivos generados automáticamente, entre otros.

Se debe configurar el archivo .gitignore antes de realizar el primer commit en un repositorio, para así evitar incluir archivos no deseados desde el principio.

Para configurar el archivo .gitignore se pueden seguir algunas reglas:

- Incluir un patrón por línea en el archivo, como por ejemplo "*.log" para ignorar todos los archivos con extensión .log.
- Utilizar comodines como * para hacer match con cualquier cantidad de caracteres, o ? para hacer match con un único caracter.
- Es posible también ignorar ciertos directorios con la notación /dir/, y sus contenidos con la notación /dir/*
- Comentar líneas en el archivo con "#" y utilizar líneas en blanco para mejorar la legibilidad.

### Resolución del ejercicio 3g
Extracto del codigo de tp1_1.c

    printf("Direccion de memoria almacenada por el puntero: %p\n", (puntero)); //imprime por pantalla 00000000000061FE1C
    printf("Direccion de memoria de la variable: %p\n", &variable); //imprime por pantalla 00000000000061FE1C
    printf("Direccion de memoria del puntero: %p\n", &puntero); //imprime por pantalla 00000000000061FE10

La **direccion de memoria almacenada por el puntero** muestra lo mismo que la **direccion de memoria de la variable** ya que _puntero_ contiene la dirección de memoria de la _variable_ y, _&variable_ devuelve la dirección de la _variable_, es decir, ambos muestran lo mismo: la direccion de la _variable_
En cambio, _&puntero_ muestra la direccion de memoria del puntero donde esta almacenada la variable
