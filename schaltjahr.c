#include <stdio.h>
int main(void){

    int jahr;
    printf("Jahr (1800-2024\n");
    scanf("%d",&jahr);
    //*falls Bedingung zutrifft*/
    if(((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0))){
        printf("Schaltjahr\n");
    }
     else { 
        printf("%d ist kein Schaltjahr\n");
    }
    return 0;
}