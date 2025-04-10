#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct _Identifier{
	int order;
	char* ID;
} Identifier;

int* create()
{
    int* table = (int*)malloc(sizeof(int)*MAXSIZE);
    table[0] = 1;
    table[1] = 2;
    return table;
}

int main()
{

    char* str = "te1\"123s";
    char* result = strchr(str, '"');
    int position = result - str;
    printf("%d\n", -2- -3);
    int* table = create();
    printf("table 1st value: %d\n", table[0]);
    printf("table 2nd value: %d\n", table[1]);
    Identifier id1 = {1, "test"};
    printf("ID1: %s\n", id1.ID);
}