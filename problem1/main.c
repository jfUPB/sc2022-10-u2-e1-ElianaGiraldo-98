#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef DOLOG
#define LOG(...) fprintf(log, __VA_ARGS__);
#else
#define LOG(...)
#endif

struct array
{
    int *pdata;
    int size;
};

void initArray(struct array *);
void getArray(struct array *);
void arrayCommon(struct array *, struct array *, struct array *);
void printArray(struct array *);
void freeMemory(struct array *, struct array *, struct array *);

void initArray(struct array *arr){
    arr->pdata = NULL;
    arr->size = -1;
}

void printArray(struct array *parr)
{
    for (int i = 0; i < parr->size; i++)
    {
        printf("%d ", parr->pdata[i]);
    }
    printf("\n");
}

void getArray(struct array *parr)
{
    printf("Introduce el tamaño del arreglo:\n");
    scanf("%d", &parr->size);
    int tm=parr->size;
    int pdata [tm];
    for(int i=0; i<tm; i++)
    {
    	printf("\nEscriba el valor [%d] ", i);
    	scanf("%d", &parr->pdata[i]);
    	parr++;
    } 
}

void arrayCommon(struct array *arrIn1, struct array *arrIn2, struct array *arrOut)
{
}
