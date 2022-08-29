#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
char* troca(const char* s, const char* antigo,
                  const char* novo)
{
    char* result;
    int i, cnt = 0;
    int novotam = strlen(novo);
    int antigotam = strlen(antigo);
  
    for (i = 0; s[i] != '\0'; i++) {
        if (strstr(&s[i], antigo) == &s[i]) {
            cnt++;
 
            i += antigotam - 1;
        }
    }
  
    result = (char*)malloc(i + cnt * (novotam - antigotam) + 1);
  
    i = 0;
    while (*s) {
        if (strstr(s, antigo) == s) {
            strcpy(&result[i], novo);
            i += novotam;
            s += antigotam;
        }
        else
            result[i++] = *s++;
    }
  
    result[i] = '\0';
    return result;
}
  

int main()
{
    char str[] = "Ola, USUARIO, atualize a senha e o nome do seu usuario";
    char c[] = "USUARIO";
    char d[] = "Patricia";
  
    char* result = NULL;
  

    printf("Antes: %s\n", str);
  
    result = troca(str, c, d);
    
    printf("Depois: %s\n", result);
  
    free(result);
    
}