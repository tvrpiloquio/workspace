#include <iostream>

using namespace std;

int main () {
	float l1, l2, p, a ;

	cout << "Inserisci la misura in centimetri di un lato" << endl ;
	cin >> l1 ;
	cout << "Inserisci la misura in centimetri di un altro lato" << endl ;
	cin >> l2 ;

	p = ( l1 * 2 ) + ( l2 * 2 ) ;
	a = l1 * l2 ;

	cout << "Il perimetro e' " << p << endl << " L'area e' " << a << endl ;


	     return 0;

}