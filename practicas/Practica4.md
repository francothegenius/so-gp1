# Objetivo 
Hacer un spike sobre IPC: señales, fork/eject, memoria compartida y archivos mapeados a memoria
#Herramientas
* git
* gcc

# Conceptos:
* IPC
  * Comunicación entre procesos
* Señales:
  * Es un IPC, consta de un procesos emisor y receptor. El emisor envía una señal y el receptor deja de hacer lo que está 
  haciendo y ejecutal el código de la señal.
  * Existen varias señales, para listarlas puedo usar el comando kill -l.
* Memoria compartida:
  * Se crea unbloque de memoria, el bloque de memoria tiene un key
  * Cualquier proceso con el key se puede conectar al bloque.
  * El bloque de memoria persiste hasa que se borre mediante un comando o se reinicie la computadora.
  
* Archivos mapeados a memoria:
  * Es un bloque de memoria compartida que está asociado a un archivo.
  * Los cambioes en el bloque se guardan automaticamente.
  
# ¿Qué aprendí?
* Creacion de procesos con la syscall 'fork()'
* Creacion de señales
* Manejo de señales 
* Acceso a espacios de memoria a nivel de registros


# URL del commit.
https://github.com/francothegenius/so-gp1/commit/551cbd6e43d9470fdad66aebf9ac42fc80163d82
https://github.com/francothegenius/so-gp1/commit/8b95261659c96dc66de91b78e55bf3cd832ae0e2
