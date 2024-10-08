#include <iostream>

using namespace std;

int main ()
{
	int c;
	c = 10;
	float somma;
	somma = 0;
	unsigned int contatore;
	contatore = 0;

	while (c > contatore)
	{
		float numero;

		cout <<"Inserire un valore numerico:";
		cin >> numero;
		/*  	if (numero < 0)
				break;
			if (numero > 10)
				continue;       */
		somma += numero;
		contatore = contatore + 1;
	}
	cout << "La media e':" << (somma/contatore);

	return 0;
}