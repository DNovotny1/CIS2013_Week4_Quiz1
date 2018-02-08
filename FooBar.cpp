/* print 1-2000 if /50 print foo, if /33 print bar*/
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	for (int i = 1; i < 2001; i++)
	{
		cout << i;
		if (i%50 == 0) {
			cout << " FOO";
			a += 1;
		}

		if (i % 33 == 0) {
			cout << " BAR";
			b += 1;
		}

				
		cout << endl;
	
		
	}
	cout << "Number of FOOS that I pitty " << a << endl;
	cout << "Number of BARS " << b << endl;
	cin >> a;
}