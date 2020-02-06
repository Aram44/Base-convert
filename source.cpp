#include <iostream>
#include <string>

using namespace std;

string baseto(int value, int base)
{
	int leni = 0;
	string output;
	do
	{
		char digit = value % base;
		if (digit < 10)
			digit += '0';
		else
			digit = digit + 'A' - 10;
		output += digit;
		value /= base;
	} while (value > 0);

	int len = output.size() -1;
	if (base == 2)
		leni = len / 2;
	else
		leni = len;
	for (int i = 0; i < leni; i++)
	{
		char temp = output[i];
		output[i] = output[len - i];
		output[len - i] = temp;
	}
	return output;
}


int main()
{
	int base, num;
	cout << "Enter number:\n";
	cin >> num;
	cout << "Enter base:\n";
	cin >> base;
	cout << baseto(num, base) << endl; 

	return 0;
}
