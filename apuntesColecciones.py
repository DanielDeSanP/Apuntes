#Apuntes de Listas y Tuplas


tupla = ("Hola",21,2.3,'a')
print(tupla)

#Las tuplas se declaran con parentesis
#Son inmutables una vez declaradas

var1 = tupla[2]
var2 = tupla[3]

print(var1)
print(var2)
print(tupla[0])

#Se accede a los elementos de una tupla por medio de [] y poniendo el indice

tuplaBidim = (tupla,(1,2,3),('a','b','c'))

for index in tuplaBidim:
	print(index)

#Una tupla es capaz de almacenar otras tuplas adentro, lo cual lo hace parecido a un arreglo
#dos dimensiones

tupla2 = (1,2,3)
tupla3 = (4,5,6)

tupla4 = tupla2 + tupla3

tupla2 = tupla2 * 2

print(tupla4)
print(tupla2)

#Se pueden unir dos tuplas por medio del operador "+"
#Se puede repetir el contenido de una tupla por medio del operador "*"

print(tupla4.index(3))
#Del mismo modo podemos ver el indice de un elemento
print(tupla4.count(2))
#Podemos contar cuantas veces aparece un elemento especificado