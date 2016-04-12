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