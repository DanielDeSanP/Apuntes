import Foundation

//Apuntes de variables

/*

	Voy a remarcar las características interesantes
	de las variables en Swift

*/
//Puedes declarar que tipo de variable es, de lo contrario swift lo detecta.
let cadena1 : String = "Hola Mundo "
let cadena2 = "Hola Mundo"
print(cadena1)

//Existen dos tipos de variables las constantes y las "variables"

let constante : Int = 1 //No se puede modificar
var variable : Int  = 2//Se puede modificar


//Podemos designar un alias al tipo de variable

typealias flotante = Float
var variableFlotante: flotante = 1.2
print(variableFlotante)



let boleano = variable == constante // Primero se evalua si el primero es igual al segundo,
									//la desicion se guarda en boleano 
print(boleano)

/*
Operador Ternario

	El operador ternario evalua la condición expresada, si esta es verdadera
	devuelve un valor si no lo es devuelve otro valor.

	Las expresiones que devuelve el operador deben de ser del mismo tipo.

*/

var a : Int = 2
var b : Int = 3

print(a<b ? "a es menor": "a es mayor") //Devuelve "a es menor" ya que se cumple la condición

a = 4

let cadena3 : String = a<b ? "a es menor": "a es mayor" //Devuelve "a es mayor" la condicion NO se cumple

//Se puede concatenar varias comparaciones.
let cadena4: String = a==b ? "a es igual a b": a<b ? "a es menor a b": a>b ? "a es mayor de b": "Que pedo?!"
print(cadena3)
print(cadena4)

