#include <stdio.h>
#include <stdbool.h>

bool eh_algarismo(char ch){

    bool c = false;

    if (ch >= 0 && ch <= 9){
        c = true;
    }

    return c;
}

int main()
{
    bool cm;
    char ch;

    printf("Digite o caractere: ");
    scanf("%c",&ch);

    cm = eh_algarismo(ch);

    if( cm == 0){
        printf("S/n");
    }else printf("N/n");


}