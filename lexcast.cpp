#include<iostream>
#include<string>
#include "boost/lexical_cast.hpp"

int main()
{
	using namespace std;
	cout << "Enter your weight: ";
	float weight;
	cin >> weight;
	string gain = "A 10% increase raises ";
	string wt = boost::lexcial_cast<string>(weight);
	gain = gain + wt + " to ";
	weight = 1.1 * weight;
	gain = gain + boost::lexcial_cast<string>(weight) + ".";
	cout << gain << endl;

	cin.get();
	return 0;
}