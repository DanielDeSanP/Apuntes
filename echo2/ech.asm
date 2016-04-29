.MODEL SMALL 
.DATA

.STACK
.CODE

INICIO:
	MOV AX,@DATA
	MOV DS,AX
	MOV BL,ES:[80H]		;en bl se guarda la longitud del argumento 
	MOV SI,81H			;apunta al espacio en blanco
	DEC BL 				;decrementa el espacio en uno 
	INC SI 				;incrementa para quitar el espacio
LEE:
	MOV AL,ES:[SI]      ;apunta al primero caracter de la cadena
						;almacena en al
	INC SI				;incrementa al siguiente valor

						;se imprime en pantalla el contenido
	MOV DL,AL 			
	MOV AH,2H
	INT 21H

	DEC BL 				;decrementa la longitud
	JNZ LEE
FIN:
	MOV AH,4CH
	INT 21H
END INICIO