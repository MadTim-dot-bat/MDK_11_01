
#include <iostream>
using std::cout;
using std::cin;

void task1()
{
	cout << "C++ is a general - purpose programming language with a bias towards systems programming that\n";

	cout << "is a better C\n";
	cout << "supports data abstraction\n";
	cout << "supports object - oriented programming\n";
	cout << "supports generic programming.\n";
}
void task2()
{
	int first;
	int second;
	cout << "input first number: ";
	cin >> first;
	cout << "input second number: ";
	cin >> second;
	int third{ first + second };
	cout << "Result: " << third << "\n";

}

void task3()
{
	double a;
	cout << "input number in centimeters: ";
	cin >> a;
	double b{ a / 2.54 };
	cout << "Result: " << b << "\n";
}

void task4()
{
 long long n;
 cout << "input N: ";
 cin >> n; 
 cout << "Result: " << n * (n + 1) / 2 << "\n";
}

void task6()
{
	int f;
	int g;
	int k;
	cout << "Input f: ";
	cin >> f;
	cout << "Input g: ";
	cin >> g;
	cout << "Input k: ";
	cin >> k;
	if (f*f + g*g == k*k)
	{
		cout << "YES \n";
	}
	else if (f < 0 or g < 0 or k < 0 or f+g == k)
	{
		cout << "UNDEFINED \n";
	}
	else
	{
		cout << "NO \n";
	}

}
void task7() {
	int year;
	cout << "Input a year: ";
	cin >> year;
	if (year % 400 == 0 or year % 4 == 0 and year % 100 != 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}

int main()
{
	task1();
	task2();
	task3();
	task4();
	task6();
	task7();
}