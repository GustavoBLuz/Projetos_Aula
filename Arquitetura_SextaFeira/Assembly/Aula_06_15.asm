.code

inicio:
	lda #0 ; inicia o k com 0
	sta k

iniciofor:
	lda tam ; verifica se k e menor que tamanho (condicao do for)
	not
	add #1
	add k
	jn for
fim:
	hlt ; termina o programa
for:
	lda #vet ; define a posicao do vetor que ira ser adicionado a M
	add k
	sta pos
	lda tam
	not
	add #1
	add k
	jn corpo
	jmp fim
corpo:
	lda pos,I
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
