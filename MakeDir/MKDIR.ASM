.MODEL SMALL
.STACK
.DATA
	CREA DB ?
.CODE

INICIO:
	
	MOV AX,@DATA
	MOV DS,AX
	MOV BL,ES:[80H]		;en bl se guarda la longitud del argumento 
	MOV SI,81H			;apunta al espacio en blanco
	DEC BL 				;decrementa el espacio en uno 
	INC SI 				;incrementa para quitar el espacio
	
GUARDA:
	MOV AL,ES:[SI]
	MOV CREA[SI],AL
	INC SI
	DEC BL
	JNZ GUARDA

MOVER:
	INC SI 
	MOV CREA[SI],30H
	LEA DX,CREA
	MOV AH,39h ;COMO EL COMANDO MD (CREA DIRECTORIO)
	INT 21H
	MOV AH, 3Bh; CAMBIA LA DIRECION CD
	INT 21h
	MOV AH, 4Ch
	INT 21h
END INICIO