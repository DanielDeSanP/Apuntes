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
	def __init__(self):
		self.atributo2 = 1
	@classmethod
	def metodoClase(cls):
		print(cls.atributo1)
	@staticmethod
	def metodoEstatico():
		print("Método estático")

test.metodoClase() #No se ha instanciado la clase
test.metodoEstatico()

t = test() #Se instanció la clase
t.metodoClase()

# Observemos que sea o no instanciada la clase podemos acceder al método
# La principal diferencia entre un metodo de clase y un metodo estático es 
# que el método estático no puede acceder a los atributos de la clase
# Actua de manera independiente a la clase.


# Metodo __new__ e __init__

"""
	Cuando instanciamos una clase, primero se llama al constructor.
	El constructor en Python es __new__ quien se encarga de la creación
	del objeto, luego este método llama a __init__ para inicializar
	el objeto como el programador desee.

"""

class Objeto:
	def __new__(cls):
		print("Metodo New")
		return super(Test, cls).__new__(cls) # Debe retornar esto para llamar a __init__

	def __init__(self):
		print("Metodo init")

	def __del__(self):
		print("El objeto murio")

objeto = Objeto()

# Destructor 

"""
	Igual que en C++, en Python existen los métodos destructores
	estos son útiles en caso de que se necesite llevar a cabo
	una accion cuando el objeto es destruido. A diferencia de C++
	Python tiene recolector de basura, así el destructor es llamado
	de forma automática, pero dicho método se puede sobreescribir.

	Si se observa, al final de la ejecucion se llama al destructor,
	pero también existe la posibilidad de que se llame antes.
"""

class Objeto2:
	def __del__(self):
		print("El objeto 2 murió")

objeto2 = Objeto2()

objeto2.__del__()

print("Hola")

# Representacion de formatos

"""
	Por medio de Representacion de formatos podemos saber que contenidos llevan 
	las clases, o un objeto en específico, para de este modo crear otro objeto igual.

"""

class Moto:
	def __init__(self, marca = "No definido", modelo = "No definido"):
		self.marca = marca
		self.modelo = modelo
	def __repr__(self):  # El metodo responde a repr(m) y siempre deve devolver una cadena
		return ("{0} - {1}".format(self.marca,self.modelo))

	def __str__(self):	#Este responde a print()
		return ("{0} ---> {1}".format(self.marca,self.modelo))

m = Moto()
print(repr(m))
m2 = Moto("Harley Davidson","Street 750")
print(repr(m2))
print(m2)

# Herencia

class Padre(object):
	def __init__(self):
		print("constructor Padre")
		self.apellido = "Mendez"
	def metodo2(self):
		print("Metodo padre")


class Hijo(Padre):
	def __init__(self, nombre, apellido):
		self.nombre = nombre
		print("constructor hijo ")
		super(Hijo,self).__init__()
	def metodo1(self):
		print("Metodo hijo")

hijo = Hijo("Eduardo","Mendez")
hijo.metodo1()
hijo.metodo2() 
print(hijo.apellido)

"""
	En el ejemplo anterior la clase hijo hereda de la clase padre,
	la clase hijo tiene su propio constructor que sobrescribe a la
	clase padre, pero este llama al constructor de la clase padre,
	para ello la clase padre tiene que heredar de la clase object.

	Todos los atributos y métodos del padre pasan al hijo.
"""

class Madre(object):
	def __init__(self):
		print("Constructor madre")
		self.apellido = "Garcia"
class Hija(Madre,Padre): #Python soporta herencia múltiple
	def __init__(self):
		print("Constructor hija")
		super(Hija,self).__init__()
hija = Hija()
hija.metodo2()
print(hija.apellido)


