
#include <iostream>

using namespace std ;

int main() {

	int q, r, divd , d ;

	q = 0 ;
	r = 0 ;
	cout << "Inserisci il dividendo: " ;

	cin >> divd ;

	cout << "Inserisci il divisore: " ;

	cin >> d ;

	while(divd >= d) {

		divd = divd - d ;

		q = q + 1 ;
	}

	r = divd ;

	cout << "Il risultato della divisione e' : " << q << endl << "Il resto e' : " << r << endl ;

return 0;

}