#include <iostream>


using namespace std;


int main () 
{
   float vt;
   cout << "Inserisci il punteggio:\n";
   cin >> vt;
    if ((vt>0) && (vt<60)) 
    {
        cout << "Il tuo voto è insufficiente.";
    } 
        else 
            if((vt>60) && (vt<70)) 
            {
                cout << "Il tuo voto è buono";
            }   
                else 
                    if((vt>70) && (vt<80)) 
                    {
                        cout << "Il tuo voto è ottimo.";
                    }       
                        else 
                            if( (vt<0) && (vt>100) ) 
                            {
                                cout << "Il punteggio inserito non è valido";
                            }           
                                    else 
                                    {
                                        cout << "Il tuo voto è eccellente.";
                                    }
return 0;
}


// PRINTF       ->       COUT << 
//  SCANF       ->       CIN  >>