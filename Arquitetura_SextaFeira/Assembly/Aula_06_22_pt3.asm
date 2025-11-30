.code

inicio:
	lda #0
	sta i
	lda #0 
	sta j

condparfor1:
	lda n
	not 
	add #1
	add i
	jn forbody1
	jmp fim
fim:
	hlt
forbody1:
	condparfor2:
			lda n
			not 
			add #1
			add j
			jn forbody2
			jmp inc2
forbody2:
	lda #a
	add i
	sta p1
	lda p1,I
	sta p1

	lda #b
	add j
	sta p2
	lda p2,I
	add p1
	sta val
	jmp inc

inc:
	lda j
	add #1
	sta j
	jmp condparfor2

inc2:
	lda i
	add #1
	sta i
	jmp condparfor1
.endcode



.data
a: db #1,#2,#3, #4, #5
b: db #5,#4,#3, #2, #1
i: db #0
j: db #0
val: db #0
n: db #5
p1: db #0
p2: db #0
.enddata

