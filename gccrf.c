/* Trabalho para a disciplina de Linguagens de Program�a�, Ci�ncia da Computa��o, UFF - Rio das Ostras, Prof. Carlos Bazilio
Alunos: Juscelino Junior e Cassiano de Souza
Coletor de Lixo usando Contagem de Refer�ncias*/

#include <stdio.h>
#include <stdlib.h>
#include "gccrf.h"

int main(){
    gcint *a,*b,*c;

    a = gcmalloc();
    atrib(a,10);
    dump(a);
    printf("Valor de a: %d\n", a->valor);

    b = gcmalloc();
    dump(b);

    atrib2(a,b);
    dump(b);

    c = gcmalloc();
    atrib2(b,c);
    dump(b);
    dump(c);
}
