#Manejo interesante de funciones en python 

#Funciones con valores de entrada por defecto h


def funcion1(a,b=1):
	print(b)


print("Funcion 1")
funcion1(3)
print("Funcion 1")
funcion1(3,3)

"""
Las funciones que tienen valores por defecto hacen que
cuando son invocadas si valores de entrada, esta toma
los valores por defecto y los usa.

"""

#Funciones con numero indefinido de parametros de entrada

def funcion2(*elementos):
	for index in elementos:
		print(index)
	return elementos

print("Funcion 2")
tupla = funcion2(2,3,1,2,3,4,2,"S")
print(tupla)

"""

Hay dos tipos de funciones con numero indefinido de parametros de entrada.

El primer tipo, usa el operador * al lado del nombre de una variable. Estas funciones
generan una tupla con todos los datos introducidos. Puede ser conveniente para generar tuplas.

"""

def funcion3(**elementos):
	print(elementos)

print("Funcion 3")
funcion3(nombre = "Lalo", edad = 24, genero = "Masculino")

"""

Esta funcion se define con el operador **, y esta genera un diccionario

"""

#Desempaquetamiento de argumentos

def funcion4(a,b,c):
	print(a)
	print(b)
	print(c)

tupla = [1,2,3]
diccionario = {'a':5,'b':6,'c':7,}
print("Funcion 4")
funcion4(*tupla)
print("Funcion 4")
funcion4(**diccionario)


"""
Se usan nuevamente los operadores * y **. La primera es para el uso del contenido 
de una tupla o lista en una funcion. La condicion que se debe de cumplir en este caso
es que la tupla tenga el mismo numero de valores que valores de entrada en la funcion.

Con el operador ** hacemos la misma accion con direccionarios, la condicion en este caso
es que el diccionario debe la misma cantidad de datos y que las palabras clave coincidan
con las variables de entrada de la funcion.

"""

#Funciones Lambda 

valor = lambda numero: numero*2

print("Funcion Lambda")
print(valor(2))

valor2 = lambda x,y: x*y
print("Funcion Lambda")
print(valor2(2,3))

"""
Las funciones lambda son mini funciones que se ejecutan y devuelven un valor que recae en una
variable. No pueden haber bucles ni puede estar presente algun return

"""