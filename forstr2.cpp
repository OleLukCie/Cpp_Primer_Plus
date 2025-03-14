#include<iostream>
#include<string>

int main()
{
	using namespace std;

	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i,j;

	for(j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << "\nDone\n"; 

	cin.get();
	cin.get();
	return 0;
}