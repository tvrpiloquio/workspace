#include <iostream>

using namespace std;

int main () {

	int n1, n2 ;

	cout << "Inserisci un numero: " ;
	cin >> n1 ;
	cout << "Inserisci un altro numero: ";
	cin >> n2 ;

	if ( (n1 % n2) == 0)
	{
		cout << "Il numero " << n1 << " e' multiplo di " << n2 << endl ;
	}
	else
	{
		cout << "Il numero " << n1 << " non e' multiplo di " << n2 << endl ;
	}
	return 0;

} 