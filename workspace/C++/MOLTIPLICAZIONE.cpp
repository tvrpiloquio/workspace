#include <iostream>

using namespace std;

int main () {

	int c, n1, n2, x, v;

	n1 = 0 ;
	n2 = 0 ;
	

	cout << "Inserisci un numero: " ;
	cin >> n1 ;
	cout << "Inserisci un altro numero: ";
	cin >> n2 ;

    v = n1 ;
	x = n2 ;
	
	while ( c < x )
	{
		n1 = n1 + v ;
		c = c + 1 ;
	}
	cout << "Il valore della moltiplicazione tra questi due numeri e' " << n1 - v << endl ;
	return 0;

}