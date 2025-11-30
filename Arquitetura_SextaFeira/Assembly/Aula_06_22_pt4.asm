lda #A
add k
sta p1
lda p1, i
sta p1

lda #b
add k
sta p2
lda p2,i
add p1
sta p1

lda #c
add k
sta p2
lda p1
sta p2,i
