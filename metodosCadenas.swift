import Foundation

/* Métodos para cadenas en swift */

// Podemos generar cadenas a partir de otras cadenas por medio de la interpolación

let dia : String = "Viernes"
let hora = NSDate()
let fecha  = "Hoy es \(dia) y la fecha es \(hora)"

print(fecha)

// La interpolación se puede hacer con cualquier tipo de dato

var numero1 : Int = 10 
var numero2 : Int = 20 
var respuesta : String = "El primer numero es \(numero1), el segundo es \(numero2)\nLa suma es \(numero1 + numero2)"
print(respuesta)

// El concatenado funciona de igual modo que en otros lenguajes de alto nivel

var cadena1 : String = "Incio"
var cadena2 : String = "Final"

var cadenaConcatenada : String = cadena1 + cadena2

print(cadenaConcatenada)

/* 
	Si quisieramos agregar un carácter al fina de la cadena
	se puede hacer por dos modos, el primero usando el constructor
	de String y concatenar y el segundo usando el método de la cadena .append
 */

var caracter : Character = "a"

// Primer modo 

cadena1 += String(caracter) //hacemos un casteo con el constructor de String

print(cadena1)

// Segundo modo

cadena1.append(caracter)
print(cadena1)

/* Una forma de declarar una cadena vacía sin tener que recurrir a las variables opcionales 
*/

var cadena3 : String = "" // Observarmos que debe de ser var y no constante

// METODOS DE CONTEO Y COMPARACION


// Recordemos que una cadena es un arreglo de caracteres, por ello cuando haceomos un 
// conteo de letras de la cadena, contamos la cantidad de caracteres en el arreglo

var numCaracteres : Int = cadenaConcatenada.characters.count

print("La cadena \(cadenaConcatenada) tiene \(cadenaConcatenada.characters.count) caracteres")

// Podemos comparar si dos cadenas son iguales con el operador == 

var cadena4 : String = cadena1


if cadena4 == cadena1 
{
	print("Son la misma cadena")
}
if cadena4 == cadena3
{
	print("Son la misma cadena")
} else {
	print("No son la misma cadena")
}


// Hay un método para averiguar si una cadena está vacía 

if cadena3.isEmpty 
{
	print("La cadena está vacia")
} else {
	print("La cadena no está vacía")
}

/* 
	Podemos averiguar también si una cadena contiene sub cadenas 
	ya sea en el inicio, en el final, o en medio de la cadena.
 */ 


print("\n\n\n")
print(respuesta)

if respuesta.hasPrefix("El") // Verificamos si la cadena empieza con El
{
	print("La cadena empieza con El")
} else {
	print("La cadena no emoieza con El")
}

if respuesta.hasSuffix("centimetros") //Verificamos si la cadena termina con centimetros
{
	print("La cadena termina con centimetros")
} else {
	print("La cadena no termina con centimetros")
}

if respuesta.containsString("numero") //Verificamos si la cadena contiene en alguna parte la cadena numero
{
	print("La cadena contiene numero")
} else {
	print("La cadena no contiene numero")
}

/* 
	Swift también nos ofrece métodos para averiguar el rango de una cadena especificada,
	a la vez que también podemos acceder a una subcadena por medio del rango 
 */

 // Con este método sacamos el rango de una sub cadena
 let rango = respuesta.rangeOfString("numero") // Regresa un valor opcional
 print(rango!)
// Con este método accedemos a la subcadena con un rango especificado
 print(respuesta.substringWithRange(rango!))

 // METODOS PARA MODIFICAR CADENAS

 var cadena5 : String = respuesta.uppercaseString
 // Todos los caracteres son mayusculas
 print(cadena5)

 cadena5 = respuesta.lowercaseString
 // Todos los carácteres son minúsculas
 print(cadena5)

 cadena5 = respuesta.capitalizedString
 // Cada palabra tiene una mayúscula
 print(cadena5)

 var coleccion = respuesta.componentsSeparatedByString(",")
 // Regresa una colección con cadenas separadas por ","
 print(coleccion)

 cadena5 = respuesta.stringByPaddingToLength(100,withString: ".",startingAtIndex: 0)
 // Alarga la cadena y agrega a los huecos con la cdena "." e inicia en el index 0
 print(cadena5)

 cadena5 = respuesta.stringByReplacingOccurrencesOfString("suma", withString : "resta")
 // Busca tods las subcadenas suma y las reemplaza por resta
 print(cadena5)
