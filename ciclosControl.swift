import Foundation

/*
	Apuntes de ciclos de control

	Los ciclos de control tienen la misma sintaxis que
	C, solo que en el caso de Swift no llevan paréntesis
	ni punto y coma.
	
	Mostraré ejemplos muy simples para que no haya duda

	Los operadores lógicos and y or son && y || respectivamente.

*/

let x = 1

if x == 1 
{
	print("\(x)")
}else if x == 2{
	print("Easter Egg 1")
}else {
	print("Easter Egg 2")
}

//Con el operador ! negamos la sentencia, por lo cual si es verdadera se convierte en falsa y 
// viceversa
if !(x == 2)
{
	print("No es X")
}

let calificacion = 7
//Podemos agregar mas de una condicion en cada case 


switch calificacion {
	case 0:
		print("Pésimo")
		break
	case 1,2:
		print("Casi cero")
		break
	case 3,4:
		print("No maaa")
		break
	case 5,6:
		print("I know that feel bro")
		break
	case 7,8:
		print("Pasaste hermano")
		break
	case 9,10:
		print("Nivel San Pedro XD")
		break
	default:
		print("¿Fuiste a la escuela?")
		break
}

// Aunque tambien podemos poner rangos en lo cases 

switch calificacion 
{
	case 0...5:
		print("NA")
		break;
	case 6...10:
		print("Acreditado")
		break
	default:
		print("Reitero, ¿Fuiste a la escuela?")
		break;
}
/* 
	
	La sentencia where es una version en miniatura de if, solo que en este caso
	condiciona la entrada al case.

 */

let numero = 10
let otroNumero = 1

switch numero {

	case numero where numero > 5 && otroNumero == 2:
		print("Mayor a 5")
		break
	case numero where numero > 7 ||  otroNumero == 1:
		print("Mayor a 7")
		break
	case numero where numero > 11:
		print("Mayor a 11")	
		break
	default:
		break
}

// Otro uso para la sentencia where es con los bucles for in

for var index in 1...10 where index % 2 == 0 
{
	print("\(index)")
	if index == 8 
	{
		break
		// Recordemos que la sentencia break rompe con el ciclo

	}
}

// Una forma de hacer un for in sin tener que declarar un iterador

for _ in 1...10
{
	print("Repeticion")
}

// Se puede usar la forma clásica proveniente de C
for var i = 0; i < 10 ; i++
{
	print("\(i)")
}

// Para imitar la iteracion con saltos como en Python

for var i in 1.stride(to: 20, by: 2)
{
	print("\(i)")
}

// Para el do/while la sintaxis es parecida
var iterador = 1 
print("Repeat/While")
repeat{

	iterador++
	print(iterador)

	} while iterador < 4

// El ciclo while es lo mismo que otros lenguajes de programacion

/* Controladores de transferencia

	Break --> Rompe con el ciclo sin importar el código restante
	Continue --> Sigue a la siguiente iteración
	Fallthrough --> Pasa a la siguiente case de un switch

 */
print("Controladores de flujo")

let numeroAleatorio = (Int(arc4random()) % 20) + 1 //Con esto generamos un número aleatorio
print("break")

// Ejemplo de break
for var index in 1...20
{
	if index == numeroAleatorio {
		print(numeroAleatorio)
		break
	}
}

// Ejemplo de continue
for var index in 1...20
{
	if index == 10 || index < 5 || index == 0
	{
		print("pasamos a la siguiente iteracion")
		continue 
	}

	switch index 
	{
		case 1...10:
			print("Un numero del 1 al 10")
			break
		case 11...20:
			print("Un número del 11 al 20")
			break
		default:
			break
	}
}

// Ejemplo de fallthrough

var entrada = 1 

switch entrada 
{
	case 1:
		print("1")
		fallthrough
	case 2:
		print("2")
		fallthrough
	case 3:
		print("3")
		fallthrough
	case 4:
		print("4")
		fallthrough
	default:
		print("This never hapened to me ")
		break
}

/* Observemos que a pesar de que el switch solo iba dar acceso al caso 1, por
medio del fallthroug tenemos la posibilidad de acceder al siguiente case sin
importar de que la variable cumpla con la condición. Así lo hacemos en todo el 
switch lo que resulta con que se imprime cada caso. */

/* Se puede etiquetar bucles y por medio de esta se pueden hacer saltos con
 break o continue */

var valor = 1 
var numero2 = 12
buscar: while numero != valor {
	valor = (Int(arc4random()) % 20 ) + 1
	if numero2 != valor 
	{
		print("Nop")
		continue buscar //Se especifica la etiqueta 
	} else {
		print("Yep")
		break buscar 
	}
}