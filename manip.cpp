#include<iostream>

int main()
{
	using namespace std;
	cout << "Enter an integer: ";
	int n;
	cin >> n;

	cout << "n n*n\n";
	cout << n << " " << n * n << " (decimal)\n";
	cout << n << " ";
	cout << n * n << " (hexadecimal)\n";

	cout << oct << n << " " << n * n << " (octal)\n";

	dec(cout);
	cout << n << " " << n * n << " (decimal)\n";

	cin.get();
	cin.clear();
	cin.get();
	return 0;
}