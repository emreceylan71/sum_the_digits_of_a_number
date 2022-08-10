
#include <iostream>
using namespace std;

int main()
{
	int k;// our number
	int  b = 0;
	int a = 10;
	cout << "Enter a number : " << endl;
	cin >> k ;

	int base;
	int length = 0;
	int dummy = k;
	int dummy2 = k;
	do {// for ex we choose 1234
		
		base = dummy / 10  ; // ın here we obtain 1234,123,12,1 respectively then control while condition if it is not loop will stop
		
		length++;//we obtain length 4
		dummy = base;

	} while (dummy > 0);


	for (int i = 0; i < length ; i++) { // as we mentioned before k=1234

	    b = b + dummy2 % a; // 1234 mod10= 4 , b=0+4 ; 123 mod10=3, b=4+3; 12 mod10=1 , b=7+2;1 mod10 = 1 ,b=9+1

		dummy2 =dummy2 / a;// 1234/10=123            ;  123/10=12        ;   12/10=1         ; 1/10= 0

			
	}

	cout << "Sum of the digits of a " << k << " is " << b;

	return 0;

}
