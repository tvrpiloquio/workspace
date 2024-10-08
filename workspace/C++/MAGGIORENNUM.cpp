#include <iostream>

using namespace std;

int main() {
	int i ;
    float v, n, x ;
	x=0 ;
	cout << "Quanti sono i numeri che vuoi inserire? ti verra' restituito il valore maggiore.\n" ;
	cin >> i ;

	while(v < i)
	{
		cout << "Inserisci un numero:\n" ;
		cin >> n ;
		v = v + 1 ; // oppure v++
        x = n ;
		if(x < n) {
			x = n ;
		}
		else {
		}

	}
	cout << "Il numero maggiore e':" << x ;
	return 0;
}
