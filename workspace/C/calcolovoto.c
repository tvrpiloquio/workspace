#include <stdio.h>


int main () {
   float vt;
   printf("Inserisci il punteggio:\n");
    scanf("%f", &vt);
    if ((vt>0) && (vt<60)) 
    {
        printf("Il tuo voto è insufficiente.");
    } 
        else 
            if((vt>60) && (vt<70)) 
            {
                printf("Il tuo voto è buono");
            }   
                else 
                    if((vt>70) && (vt<80)) 
                    {
                        printf("Il tuo voto è ottimo.");
                    }       
                        else 
                            if((vt<0) && (vt>100)) 
                            {
                                printf("Il punteggio inserito non è valido");
                            }           
                                else 
                                {
                                    printf("Il tuo voto è eccellente.");
                                }
return 0;
}