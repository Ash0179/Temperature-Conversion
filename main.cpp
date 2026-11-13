#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int tempCelsius;
	int tempFarenheit;

	cout << "Enter temperature in Celsius: ";
	cin >> tempCelsius;

	tempFarenheit = (tempCelsius * 9 / 5) + 32;

	cout << "\nTemperature Conversion\n";
	cout << "-----------------\n";

	cout << "Celsius: " << tempCelsius << endl;
	cout << "Farentheit: " << tempFarenheit << endl;
}