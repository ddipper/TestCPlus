#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>

using namespace std;
struct Auto {
	int wheels;
	float speed;
	char color;

};

int main()
{
	//http://cppstudio.com/post/437/ //for string functions

	setlocale(LC_CTYPE, "rus");			//rus language in cout!!!
	SetConsoleCP(1251);					//rus in cin!!!
	SetConsoleOutputCP(1251);			//rus in cout!!!


	/*
	//hello world
	int num = 10;
	cin >> num; // ReadLine
	cout << "My number: " << num; // WriteLine
	*/


	/*
	// -+=%/
	int n1, n2, mul, mod;  // n1 * n2 = mul
	cin >> n1;
	cin >> n2;
	mul = n1 * n2;
	cout << n1 << " * " << n2 << " = " << mul << endl; // endl = \n
	mod = n1 % n2;
	cout << n1 << " % " << n2 << " = " << mod << endl;
	*/


	/*
	// randomaizer
	cout << "1 - random number" << 1 + rand() % 100 << endl; // random 1 - 100
	*/


	/*
	// String's
	string name = "George";
	string name1 = " ";
	cout << "Enter Your name" << endl;
	getline(cin, name);
	getline(cin, name1);
	//cout << "Yout name " << name << endl;
	if (name.length() != 0)
		cout << "Your name is " << name;
	else
		cout << "Error";
	if (name == name1)
		cout << "equal!";
	else
		cout << "not equal";

	cout << name + name1;
	*/


	// for  while  do wile
	/*
	for (int i = 0; i < 10; i++)
	{
		if (i % 5 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	int i = 0;
	while (i < 15)
	{
		cout << i << endl;
		i++;
	}

	int j = 0;
	do {
		cout << " " << j;
		j++;
	} while (j < 15);
	*/


	// try catch
	/*
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	cin >> num2;

	try {
		if (num2 == 0)
			throw 228;
		cout << "num1 / num2 = " << num1 / num2 << endl;
	}
	catch (int i)
	{
		cout << "Error #" << i << " num2 is 0!";
	}
	*/


	// arrays and ukazateli
	/*
	const int n = 0;

	int value = 1;
	int* ptrvalue = &value;

	int arr[3];
	for (int i = 0; i < 3;i++)
	{
		cin >> arr[i];
		cout << arr[i] << endl;
	}
	*/


	// string and char
	/*
	setlocale(LC_CTYPE, "rus");			//rus language in cout!!!
	SetConsoleCP(1251);					//rus in cin!!!
	SetConsoleOutputCP(1251);			//rus in cout!!!
	cout << "Привет";

	char string[500];
	cout << "Введите строку: ";
	//gets (string);
	cout << string << endl;
	*/


	//structurs
	Auto audi;
	audi.color = 'r';
	audi.speed = 190.12;
	audi.wheels = 4;

	Auto nissan = { 4, 234.21, 'b' };

	cout << "audi speed = " << audi.speed << "\n" << "nissan speed = " << nissan.speed << endl;

	return 0;
}