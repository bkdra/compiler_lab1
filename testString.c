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

int isOverflow_float(char* str)
{
	int isfloat = 0;
	double num_double;
	float num_float;

	if(str[strlen(str)-1] == 'f')
		isfloat = 0;
	
	if(isfloat)
	{	
		str[strlen(str)-1] = '\0';
		num_float = atof(str);
	}
}

int main()
{
    char *str1 = "2147483647";
    char *str3 = "2147483648";
    char *str2 = "2147483649";
    char *str4 = "-2147483647";
    char *str5 = "-2147483648";
    char *str6 = "-2147483649";
    char *str7 = "-11111111111";
    char *str8 = "-1";
    char *str9 = "1";

    if(isOverflow_float(str1))
        printf("str1 is overflow\n");
    else
        printf("str1 is safe\n");
    if(isOverflow_float(str2))
        printf("str2 is overflow\n");
    else
        printf("str2 is safe\n");
    if(isOverflow_float(str3))
        printf("str3 is overflow\n");
    else
        printf("str3 is safe\n");

    if(isOverflow_float(str4))
        printf("str4 is overflow\n");
    else
        printf("str4 is safe\n");
    if(isOverflow_float(str5))
        printf("str5 is overflow\n");
    else
        printf("str5 is safe\n");
    if(isOverflow_float(str6))
        printf("str6 is overflow\n");
    else
        printf("str6 is safe\n");
        if(isOverflow_float(str6))
        printf("str6 is overflow\n");
    else
        printf("str6 is safe\n");
    if(isOverflow_float(str7))
        printf("str7 is overflow\n");
    else
        printf("str7 is safe\n");
    if(isOverflow_float(str8))
        printf("str8 is overflow\n");
    else
        printf("str8 is safe\n");
    if(isOverflow_float(str9))
        printf("str9 is overflow\n");
    else
        printf("str9 is safe\n");
    
    
}