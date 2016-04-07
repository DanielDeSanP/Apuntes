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

cad2 = cad2.lower()
print(cad2)

cad2 = cad2.capitalize()
print(cad2)

listaCadenas = cad2.split(" ")
print(listaCadenas)

#El metodo split divide la cadena a partir de un caracter definido, y devuelve una tupla
