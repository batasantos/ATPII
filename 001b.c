#include <stdio.h>
#include <stdbool.h>

bool eh_maiuscula(char ch){

    bool c = false;

    if (ch >= 'A' && ch <= 'B' ){
        c = true;
    }

    return c;
}

bool eh_minuscula(char ch){

    bool c = false;

    if (ch >= 'a' && ch <= 'b' ){
        c = true;
    }

    return c;
}

bool eh_letra(char ch){

    bool c = false;

    if ((ch >= 'A' && ch <= 'B') || (ch >= 'a' && ch <= 'b') ){
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

    cm = eh_maiuscula(ch);

    if(cm == true){
        printf("S");
    }else printf("N");


}