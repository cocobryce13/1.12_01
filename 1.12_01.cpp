#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>

int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "Rus");

	std::ifstream f ("in.txt");
	std::string str1;

	if(f.is_open())
	{
		while (!f.eof())
		{
			f >> str1;
			std::cout << str1 << std::endl;
		}
		f.close();
	}
	else
	{
		std::cout << "Не получилось открыть файл!";
	}
	std::cout << "\n\n\n";
}