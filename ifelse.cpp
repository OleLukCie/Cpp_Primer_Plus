#include<iostream>

int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);

	while(ch != '.')
	{
		if(ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;

		std::cin.get(ch);
	}

	std::cout << "\nPlease excuse the slight confusion.\n";

	std::cin.get();
	return 0;
}