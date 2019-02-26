# Practica 1

## Objetivo:
Crear dos llamadas a sistema, una para apagar y otra para reiniciar.

## Herramientas:
* make
* gcc
* git

## Conceptos

1) Llamada a sistema 

* Se usan para acceder al hardware
* Desde comando son una interrupción
* Desde el kernel se utilizan el codigo de hardware especifico.

2) Modo kernel

* Es el bit para acceder al hardware
* Se enciende cuando se ejecuta el kernel

3) Interrupciones
* Cómo el hardware interactua con el CPU

4) Interrupciones via software (trap)
* Software comunicar con el kernel, SF -> CPU -> Kernel

## ¿Qué aprendí?
En esta práctica aprendí el procedimiento de solicitud de llamadas a sistema a traves interrupciones via software que son constituidas por instrucciones y por medio de éstas se procesan en el kernel como puente con el software hacia el hardware para que éste reciba las interrupciones y cumpla con su objetivo respectivo, en este caso, instrucciones para apagar y reiniciar el sistema. Al haber creado estas instrucciones, se agregaron dichas funcionalidades accesibles al usuario y no solo inscrito dentro del codigo feunte para que éste pueda realizar las llamadas al momento de requerirlas
## URL del commit
https://github.com/francothegenius/so-gp1/commit/6122bdb0e65adde7233b22704a9c5d0c212b5bb7

