import Foundation

/* 
	Apuntes de variables Opcionales


	Hora de jugar con las opcionales


	Swift no deja como tal declarar variables vacias
	por cuestiones de "seguridad", en cierto modo 
	hace que el programador se responsabilice de que
	una variable puede estar vacía o no, lo que puede 
	generar un error en ejecución. Al principio no
	puede ser una función muy útil, puede llegar a ser
	un poco tedioso, pero cuando se maneja en el desarrollo
	de aplicaciones, tenemos cierto concocimiento de 
	que parte de esta no puede estar funcionando adecuadamente,
	ya que puede que por ciertos factores algún método,
	función o algo no mande apropiadamente algún dato 
	requerido, entonces el compilador de swift obliga al 
	programador de que la variable que reciba ese dato 
	sea de tipo opcional, para estar en cierto modo
	al tanto del posible origen de los errores, y así
	manejarlos apropiadamente para evitar errores de ejecución.

 */

 var opcional1 : Int?

 var opcional2 : String?

 let opcional3 : Double?

 // Observemos que una variable opcional puede ser constante o variable

 var opcional4 : Int!

 opcional4 = 4
 opcional1 = 5
 opcional2 = "hola"
 opcional3 = 2.31

 print(opcional4)
 print(opcional1)
 print(opcional1!)

/*	Si se ejecuta el código se observará que al imprimir por primera
	vex la opcional1 aparecerá Optional(5), para que podamos acceder
	al valor contenido tenemos que usar el operador "implicitly unwrap" !  
	
	*/

// Una forma de comprobar si una opcional tiene contenido
var opcional5 : Int?

if let auxiliar = opcional1
{
	print("Tiene contenido")
} else {
	print("No tiene valor")
}

if let auxiliar = opcional5 
{
	print("Tiene contenido")
} else {
	print("No tiene contenido")
}

// Podemos evaluar si varias opcionales tienen contenido
// Hacer la prueba, quitando la asignación a opcional5
// opcional5 = 2

if let aux1 = opcional1, let aux2 = opcional2, let aux3 = opcional3, let aux4 = opcional5 where opcional5! != 0 
{
	print(opcional1!,opcional2!,opcional3!)
} else {
	print("No cumple condicion ")
}

// Si se descomenta dará error, ya que solo fue declaradar aux1 para ser usada dentro del if
// print(aux1)

/* Uso del "guard"

	El guard nos es útil para verificar si la opcional
	contiene algo , o no, para ello se integra con las 
	exepciones.
 */

 guard let aux = opcional1 else {
 	throw NSError(domain: "Opcional vacio", code: 0, userInfo: nil)
 }
 print(aux)

 // El caso anterior se validó la opcional y se guarda en la variable aux, que 
 // se puede usar en el resto del código, a diferencia de los "if"

/*
let opcional6 : Int?
 guard let aux1 = opcional6 else {
 	throw NSError(domain: "Opcional Vacio", code: 0, userInfo: nil)
 }

 print(aux1)


 	El bloque anterior causará un error ya que no se validará la opcional, lo
 	cual hará que se llame al error para interrumpir la ejecución. Como mensioné antes,
 	"guard" es muy útil para manejo de exepciones, ya que nos aseguramos de que
 	la opcional tenga un valor, si lo tiene, crea una variable que contiene 
 	el contenido de la opcional y se usa en ek resto del código. Si no se hiciera
 	es llamada al error, habría otro error por una variable que recibe un valor nil.
 */


 /* Operador de coalescencia nula ??

 	Con este operador podemos dejar de arriesgarnos a que 
 	una opcional esté vacia, ya que funciona de manera similar al operador
 	ternario. Podemos definir un valor por defecto que puede contener 
 	la variable opcional en caso de que este se encuentre nula en ese momento */

var mensaje: String?
var mensajeDefault : String = "Mensaje por default"
var mensajeDesplegable = mensaje ?? mensajeDefault

print(mensajeDesplegable)

// Como mensaje estaba vacío se utiliza mensajeDefault para evitar problemas

mensaje = "Hola"
mensajeDesplegable = mensaje ?? mensajeDefault

print(mensajeDesplegable)

//Ahora mensaje tiene contenido, entonces el contenido de esta pasa a mensajeDesplegable