import Foundation

/*
Este programa cuenta el número de digitos de un número introducido por el usuario.
La entrada es:

	No "N" de pruebas
	Número 1
	Número 2
	.
	.
	.
	Número N
*/

////////////////////////////////////
//Function: contarDigitos
//in: un número enterp
//out: entero
/*
Description:
	
	La función se encarga de hacer el conteo de digitos de un número 

*/
func contarDigitosDivisibles(numeros: Int) -> Int
{
	var numeroDigitos : Int = 0
	var numero = Double(numeros)
	repeat
	{
		numeroDigitos++
		numero = numero * 0.1

		}while numero >= 1
	return numeroDigitos
}

//Declaramos la variable que recibe el número de test
let numeroTest : Int = Int(readLine(stripNewline: true)!)!


//Simplemente vamos a requerir de una variable que reciba el numero a analizar
var auxiliar : Int

//Procedemos a llenar el arreglo con un ciclo

for var i = 0; i < numeroTest; i++
{
	auxiliar = Int(readLine(stripNewline: true)!)!
	print(contarDigitosDivisibles(auxiliar))
}



