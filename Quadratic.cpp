#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, d, x1, x2;
	cout <<"Enter the value of a: ";
	cin >>a;
	cout << "Enter the value of b: ";
	cin >>b;
	cout <<"Enter the value of c: ";
	cin >>c;
	d = (b * b) -(4 * a * c);
	
	if (a == 0)
	{
		cout << "Not qaudratic equation";
	}
	else if (d > 0)
	{
	x1 = (-b +sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 *a);
	
	cout << "first root = " << x1
	<< endl;
	cout << "second root =" << x2
	<< endl;
    }
    else if (d == 0)
    {
    	x1 = -b / (2 * a);
    cout << "Equal roots = " << x1;
    }
    else
    {
    	cout <<"The roots are complex numberd";
	}
	
	return 0;
}
