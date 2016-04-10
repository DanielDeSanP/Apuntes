#Sentencias de control y funciones

#Defincion de Funciones 
def introducirEntero():
	entero = int(raw_input("Opcion: "))
	return entero


def ifElseElif():
	print("Ejemplo de un ciclo if else, elif")
	print("Simpemente observa el codigo de la funcion seleccionar")
	seleccionar()

def forWhile():
	print("Ejemplo de for")
	print("Declaramos un tupla")
	tupla = [2,3,4,2]
	print(tupla)
	pressEnter()
	print("Podemos iterar cada elemento de esta con un for")

	for index in tupla:
		print(index)

	pressEnter()
	print("Tambien podemos hacer conteos en un rango definido")
	pressEnter()

	for numero in range(1,30):
		print(numero)

	pressEnter()
	print("Y tambien podemos hacer saltos en el conteo")
	pressEnter()

	for numero in range(1,30,2):
		print(numero)

	pressEnter()
	print("La variable fue iterando de dos en dos")
	pressEnter()
	print("O tambien podemos iterar en una sucesion de numeros que definamos")
	pressEnter()
	for numero in (1,2,3,4,4,5):
		print(numero)
	pressEnter()
	print("En el caso de while funciona de manera similar a otros lenguajes de programacion")

	seleccionar()

def passWith():
	print("Ejemplo de Pass With")
	seleccionar()

def pressEnter():
	enter = raw_input("Enter")

def seleccionar():
	print("Seleccionar una opcion")
	print("1.- if,else y elif")
	print("2.- for/while")
	print("3.- passWith")
	print("4.- Terminar Ejecucion")
	opcion = 0 
	opcion = introducirEntero()

	if opcion == 1:
		ifElseElif()
	elif opcion == 2:
		forWhile()
	elif opcion == 3:
		passWith()
	elif opcion == 4:
		print("Adios")
	else:
		seleccionar()

#Ejecucion Principal
seleccionar()



