#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main ()
{
	int c, v, n, x ;
	v = 10 ;
	srand(time(0));

	while(c < v) {
		n = rand() % 6 + 1 ;
		cout << "Ho lanciato un dado, il numero che e' uscito e' :" << n << endl ;
		c = c + 1 ;
		if(x < n) {
			x = n ;
		}
		else {
		}
	}
	cout << "Il numero maggiore tra quelli usciti e' : " << x << endl ;
	return 0;
}