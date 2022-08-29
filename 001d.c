#include <stdio.h>
#include <string.h>
#define NMAX 400
        
int main()
{
    char f[NMAX] = "A CIA denuncia que a Mafia abastecia o trafico de armas na bacia do Rio do Prata";
    char p[20] = "cia";
    char p2[20] = "CIA";
      
    int i,j,count=0;

    for(int i = 0; f[i] != '\0'; i++){
        if ((p[j] == f[i]) || (p2[j] == f[i]))
        {
            j += 1;
            if (p[j] == '\0'){
                count += 1;
                j = 0;
            }
        }else j = 0;
            
    }

    printf( "Aparece 'cia' %d vezes\n", count);    
    
}