#include <stdio.h>
#include <stdbool.h>

char minuscula(char ch){

    char letranova;
     
    if(( ch >= 'A' &&  ch <= 'B') || ( ch >= 'a' &&  ch <= 'b') ){
        letranova = tolower(ch);
    }

    return letranova;
}

int main()
{
    bool cm;
    char ch;

    printf("Digite o caractere: ");
    scanf("%c",&ch);

    cm = minuscula(ch);

    printf("%c", cm);


}