#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	float a = 0;
	a = (i1 + i2 + i3); //for some reason this started by eqauling 2 when all numbers were 1
	//cout << "a = " << a << endl; used to find error
	a = a / 3;
	return a;
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // was n2 instead of n3

	float a = 0;
	a = average(n1, n2, n3); // At first makes it equal the total instead

	cout << setprecision(2) << fixed << "The average is " << a << endl; // Not an error but I wanted to see an extra decimal


	cout << "\n\nPress enter to close the program\n";
	cin.ignore();
	cin.get(); //Now th program dosen't just close when not in debug mode before answer is shown
	return 0;
}
