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


#Una forma mas elegante de crear y llenar tuplas

lista = [ele for ele in (1,2,3)]
print (lista)

"""
Las listas funcionan de manera similar que las tuplas solo que estas si son mutables,
aparte de que estas tienen metodos para modificarlas


"""

#Metodos de adicionamiento o eliminicacion con las listas
lista1 = [1,2,3,4,5,6,7]
print(lista1)
lista1.append(2)
print(lista1)
lista1.insert(3,12)
print(lista1)
del(lista1[1])
print(lista1)

#Metodos de ordenamiento de listas 
sorted(lista1)
print(lista1)
sorted(lista1,reverse = True)
print(lista1)
#Los metodos anteriores no alteran la lista origingal, los siguientes si

lista1.sort()
print(lista1)
lista1.reverse()
print(lista1)

#Diccionarios

"""
Un diccionario es una estructura de dato muy util , en el que por medio de una llave
podemos acceder a un valor

"""

diccionario1 = dict(a=1,b=2,c=3)
print(diccionario1)
diccionario2 = {'a' : 8, 'b':4,"nombre":"Lalo"}
print(diccionario2)

"""
Podemos acceder a sus contenidos con la palabra clave, ya sea para usarlos o modificarlos
"""

print(diccionario2["nombre"])
diccionario2['a'] = 23
print(diccionario2)






