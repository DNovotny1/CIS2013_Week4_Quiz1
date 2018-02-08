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
		}

		if (i % 33 == 0) {
			cout << " BAR";
		}

				
		cout << endl;
	
		
	}
	cin >> a;
}