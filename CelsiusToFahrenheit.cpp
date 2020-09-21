#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int Celsius;
	double Fahrenheit;
	cout << "Enter Degress in Celsius:";
	cin >> Celsius;
	Fahrenheit = (Celsius*(9/5) + 32);
	cout << "The temperature in Fahrenheit";
		cout << Fahrenheit << " ";
	return 0;
}