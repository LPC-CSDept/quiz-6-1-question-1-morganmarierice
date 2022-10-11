#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &, int &);
void getinput(float &, float &);
void swapTwoValues(int &, int &);
void swapTwoValues(float &, float &);


int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
// ******************************

void getinput(int &num1, int &num2)
{
	cout << "Enter two integers\n";
	cin >> num1 >> num2;
}

void getinput(float &fnum1, float &fnum2)
{
	cout << "Enter two floats\n";
	cin >> fnum1 >> fnum2;
}

void swapTwoValues(int &num1, int &num2)
{
	int blank = num1;
	num1 = num2;
	num2 = blank;
}

void swapTwoValues(float &fnum1, float &fnum2)
{
	cout << fixed << setprecision(2) << endl;
	float blank = fnum1;
	fnum1 = fnum2;
	fnum2 = blank;
}
//had to fix blank in swapTwoValues(float &, float &) so that it was a float. At first, it was 
//declared as integer, so the decimal was being cut off