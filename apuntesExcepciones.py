#! /usr/bin/python
# -*- coding:utf-8 -*-
#Si se esta usando Windows, borra la primera línea

#Manejo de excepciones
class ValorIncorrecto(Exception):
	def __init__(self,val):
		print(("El valor {0} es incorrecto").format(val))

def introducirDatos():
	try:
		a = input()
		return a
	except:
		print("Error al introducir los datos")
		introducirDatos()
"""
	En la función anterior, todo el código que es suceptible a un error 
	que puede causar la interrupción del programa se introduce en try,
	por ejemplo el posible error es una errónea introduccion de datos, 
	si eso pasa, se ejecuta el codigo de except, que lanza un mensaje
	de error y llama de nuevo a la función.

"""

a = introducirDatos()
lista = (2,3,4,5,4)

try:
	print(lista[a])
except IndexError:
	print("Error: Indice no válido")
except:
	print("Error")
else:
	print("Indice Válido")
finally:
	print("Operacion Terminada")


"""
	En el ejemplo anterior, usamos el valor devuelto para acceder
	a un valor en la tupla, si este valor indice sobrepasa a la 
	capacidad de la tupla, se lanza un error, el intérprete lo
	reconoce como IndexError entonces ejecuta la excepcion que 
	lleva ese nombre.

	Aparte tenemos otros apartados, else y finally. Se ejecuta else
	en caso de que no ocurra algún error y finally se ejecuta siempre,
	aunque haya error.
"""

try: 
	raise TypeError
except:
	print("Error de tipo")

"""
	En el ejemplo anterior lanzamos un error, que en este caso ya está definido
	por el interprete.
"""
b = input("Dame un número")

raise ValorIncorrecto(b)

"""
	En este caso el programador define la excepcion para ello se
	requiere de una clase que herede de Exception que lleve el mismo
	nombre de la excepcion.
"""
