#include <iostream>
#include <string>

// Project 1 — Joe Barron
// CIS 5 Week 04 · Student card
using std::cout;
using std::cin;
using std::string;


int main() {
	string first, last;
	cout << "Enter first name: ";
	cin >> first;
	cout << "Enter last name: ";
	cin >> last;
	int Age = 0;
	cout << "Enter age: ";
	cin >> Age;
	int Credits = 0;
	cout << "Enter your current credits: ";
	cin >> Credits;
	double GPA = 0.0;
	cout << "Enter your GPA: ";
	cin >> GPA;
	const int CURRENT_YEAR = 2026;
	
	int grad_year = CURRENT_YEAR + 4;
	double a = 100.0;
	double difference = 0.0;
	difference = a - Credits;

	cout << "====== Student Card ======\n";
	cout << "Name: " << first << " " << last << "\n";
	cout << "Age: " << Age << "\n";
	cout << "Credits: " << Credits << "\n";
	cout << "GPA: " << GPA << "\n";
	cout << "Expected Graduation Year: " << grad_year << "\n";
	cout << "Remaining Credits: " << difference << "\n";
	cout << "===========================\n";

  return 0;
}
