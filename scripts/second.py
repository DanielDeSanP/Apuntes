
"""
Se puede hacer la importacion con la sentencia import
Pero para hacer uso de las funciones, de las clases etc. Se requiere indicar primero el modulo origen

import first

first.decirHola()
"""

def decirHola2():
	print("Hola Mundo desde segundo Script")

from first import decirHola

decirHola()

print("Hola Mundo desde Script 2")

#Con el operado * podemos hacer la importacion de todo el contenido

from first import *

decirAdios()

preguntarEstado()

"""
Nota:

Se debe de poner todas las importaciones al principio del codigo, a pesar
de que el interprete permite poner las importaciones en otras partes del codigo.

"""

import first as Primero 

Primero.decirHola()

