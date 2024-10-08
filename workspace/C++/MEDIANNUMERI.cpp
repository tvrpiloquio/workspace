#include <iostream>

using namespace std ;
int main()
{
	int c;
	cout << "Quante volte vuoi  inserire i nummeri? ";
	cin >> c ;
	float somma;
	somma = 0;
	unsigned int contatore;
	contatore = 0;

	while (c > contatore)
	{
		float numero;

		cout <<"Inserire un valore numerico:";
		cin >> numero;
		somma += numero;
		contatore = contatore + 1;
	}
	cout << "La media e':" << (somma/contatore) << endl;
	return 0;
}