#! /usr/bin/python
# -*- coding:utf-8 -*-

#Programación orientada a objetos


class Coche:
	#Variable de clase
	NoRuedas = 4
	#Método constructo con variables de instancia
	def __init__(self,marca,modelo,color):
		self.marca = marca
		self.modelo = modelo
		self.color = color
	#Getter, en este momento no es del todo necesario.
	def obtenerInformacion(self):
		print(self.marca)
		print(self.modelo)
		print(self.color)
	#Otros Metodos
	def acelerar(self):
		print("El auto está acelerando")
	def obtenerCaracteristicas(self):
		print(self.NoRuedas)

#Se instancia la clase Coche en un objeto llamado miCoche
miCoche = Coche("Audi","R8","Gris")
#Se accede a los métodos de la instancia
miCoche.obtenerInformacion()
miCoche.obtenerCaracteristicas()
print(miCoche.NoRuedas)
print(miCoche.marca)
#En este caso no se instancia la clase, solo se accede a la variable de clase
print(Coche.NoRuedas)


from math import pi

class Circulo:
	def __init__(self,radio):
		self.radio = radio

	#Agregamos un decorador
	@property
	def area(self):
		return pi * (self.radio ** 2)

circulo = Circulo(20)
print(circulo.area)

"""

	Como podemos observar, área no es una variable de instancia 
	o una variable de clase, es un método, que gracias a decorador
	@property podemos acceder a ella como una variable, pero solo
	para leerla no para modificarla

"""

"""
class otroCirculo:
	@property 
	def radius(self):
		return self.__radio
	@radio.setter
	def radio(self,radio):
		self.__radio = radio

otrocirculo = otroCirculo()
	
	
"""


"""
	En otros lenguajes de programación exiten los conceptos
	private, public, protected, para designar el acceso que se
	tiene a ciertas característcas de la clase. En python 
	no existen esos conceptos como tal, existen convenciones 
	entre programadores, y un mecanismo que simula los métodos
	private.
"""

# # class privado:
# # 	def __init__(self):
# # 		self.__atributo = 1

# # 	def _metodoPrivado(self):
# # 		print("Metodo privado")


# # p = privado
# # p._metodoPrivado
# # # print(p.__atributo) Python no dejará el acceso de esa manera

# print(p_privado__atributo)


# METODOS DE CLASE

"""
	Los métodos de clase son parecidos a las clases abstractas
	en el sentido de que pueden ser invocadas sin la necesidad 
	de que se instancie la clase
"""

class test:
	atributo1 = 1
	def __init__():
		self.atributo2 = 1
	@classmethod
	def metodoClase(cls):
		print(cls.atributo1)
	@staticmethod
	def metodoEstatico():
		print("Método estático")

test.metodoClase() #No se ha instanciado la clase
test.metodoEstatico()

t = test #Se instanció la clase
t.metodoClase()

# Observemos que sea o no instanciada la clase podemos acceder al método
# La principal diferencia entre un metodo de clase y un metodo estático es 
# que el método estático no puede acceder a los atributos de la clase
# Actua de manera independiente a la clase.