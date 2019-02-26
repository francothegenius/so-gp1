# Practica 2

## Objetivo:
Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar el programa anterior

## Herramientas:
* make
* gcc
* git

## Conceptos

1) Proceso

* Instancia de un programa
* Está compuesta de 3 partes:
** stack: variables está limitado; crece de arriba hacia abajo. StackOverFlow
** heap: area de memoria dinamica = RAM + SWAP
** codigo: segmentado, ie es una parte.

* Tiene estancias

* Se crean mediante dos llamadas a sistema:
** fork: clone
** exec: cambia codigo

* Hay un proceso padre:
** init

2) Modo kernel

* Es el bit para acceder al hardware
* Se enciende cuando se ejecuta el kernel

3) Interrupciones
* Cómo el hardware interactua con el CPU

4) Interrupciones via software (trap)
* Software comunicar con el kernel, SF -> CPU -> Kernel

