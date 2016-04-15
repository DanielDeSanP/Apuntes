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
	
	to be continued ...
	*/

 