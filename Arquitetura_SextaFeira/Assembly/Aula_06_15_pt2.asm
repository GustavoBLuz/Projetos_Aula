.code

inicio:
	lda #0 
	sta k

iniciofor:
	lda tam 
	not
	add #1
	add k
	jn for
fim:
	hlt
for:
	lda #vet 	
add k
	sta pos
	lda tam
	not
	add #1
	add k
	jn corpo
	jmp fim
corpo:
	lda M
	add pos,I
	sta M
	lda K
	add #1
	sta k
	jmp for

.endcode





.data
vet: db #3,#2,#4,#7
tam: db #4
k: db #0
m: db #0
pos: db #0
.enddata
