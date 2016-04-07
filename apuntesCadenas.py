import math

#apuntes python 

#metodos de cadenas

cad = " Hola Mundo "
print(cad)
largo = len(cad)
print(largo)
#el metodo len regresa de caracteres de la cadena 

indexChar = cad.find("a")
print(indexChar)
indexChar = cad.find("la")
print(indexChar)
indexChar = cad.find("le")
print(indexChar)

#el metodo find puede encontrar un caracter una cadena  
#si la encuentra devuelve el index, si no devuelve -1

cad2 = cad.replace("Hola","Adios")

print(cad2)

#el metodo replace, remplaza la primera cadena contenida, por la segunda
#pero no hace cambios a la cadena original, devuelve la cadena modificada


print(cad2.strip())
print(cad2.lstrip())
print(cad2.rstrip())
cad2 = cad2.strip()

#El metodo strip elimina los espacios en los costados
#los metodos lstrip y rstrip agregan espacios en la derecha e izquierda respectivamente

cad2 = cad2.upper()
print(cad2)

#Todas las letras se vuelve mayusculas

cad2 = cad2.lower()
print(cad2)

#Todas las letras se vuelve minusculas

cad2 = cad2.capitalize()
print(cad2)

#El primer caracter se vuelve mayuscula

listaCadenas = cad2.split(" ")
print(listaCadenas)

#Devuelve un tupla con los elementos de la cadena separados a partir del caracter especificado

cad2 = "abc".join(".")
print(cad2)

edad = 10
cadena3 = "Tu edad es " + str(edad)
print(cadena3)

#concatenacion de cadena con un valor entero casteado a cadena 
