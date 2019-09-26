typedef struct gcint{ //struct para o valor e o contador de refer�ncias para o ponteiro
    int valor;
    int cont;
}gcint;

gcint *gcmalloc(){ // aloca��o de mem�ria para o ponteiro
    gcint *aux=(gcint*)malloc(sizeof(gcint));
    aux->cont = 1;
    return aux;
}

void atrib( gcint *p, int x){ //atribuindo um valor no ponteiro
    p->valor = x;
}

void atrib2(gcint *a, gcint *b){ //atribuindo um ponteiro a outro ponteiro (a=b), e verificando se o contador j� zerou
    a->cont--;

    if(a->cont==0){
        free(a);
        printf("memoria liberada\n");
        a = NULL;
    }
    a=b;

    b->cont++;
}

void dump(gcint *p){ //imprimindo o contador de um ponteiro
	printf("Contador = %d\n", p->cont);
}
