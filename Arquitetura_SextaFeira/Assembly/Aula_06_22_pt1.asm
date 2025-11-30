.code

inicio:
	lda #0
	sta j
condpar:
	lda n
	not add#1
	add j
	jn forbody
	jmp fim
fim:
	hlt
forbody:
	lda #a
	add j
	sta p1
	lda p1,I
	sta p1
	lda #c
	add j
	sta p2
	lda p2,I
	add p1
	add p1
	sta p2,I
	jmp inc
inc:
	lda j
	add #1
	sta j
	jmp condpar


.endcode



.data
c: db #0,#0,#0, #0
a: db #1,#2,#3, #4
j: db #0
p1: db #0
p2: db #0
.enddata




c[i] += A[i]*2
