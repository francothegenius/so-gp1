# Practica 2

## Objetivo:
* Modificar al programa init para imprimir un mensaje de bienvenida.
* Modificar al programa sh para ejecutar el programa anterior

## Herramientas:
* make
* gcc
* git

## Conceptos

1) Proceso

* Instancia de un programa
* Está compuesta de 3 partes:
  * stack: variables está limitado; crece de arriba hacia abajo. StackOverFlow
  * heap: area de memoria dinamica = RAM + SWAP
  * codigo: segmentado, ie es una parte.

* Tiene estancias

* Se crean mediante dos llamadas a sistema:
  * fork: clone
  * exec: cambia codigo

* Hay un proceso padre:
  * init

## ¿Qué aprendí?
* Función de fork() para la creación de procesos
* Lectura de caracteres del shell a traves del buffer
* Interpretación de un "key shortcut" para la ejecución de una comando anterior
