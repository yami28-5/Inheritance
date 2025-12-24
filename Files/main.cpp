#include<Windows.h>
#include<iostream>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;

//#define WRITE_TO_FILE
//#define INPUT_STRING

void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	std::ofstream fout;
	fout.open("File.txt", std::ios_base::app);
	fout << "Hello World!" << endl;
	fout.close();
	system("start winword File.txt");
#endif // WRITE_TO_FILE
#ifdef INPUT_STRING
	cout << "¬ведите ваше им€: " << endl;
	const int SIZE = 256;
	char last_name[SIZE] = {};
	char first_name[SIZE] = {};
	SetConsoleCP(1251);
	cin >> first_name >> last_name;
	SetConsoleCP(886);
	cout << first_name << "\t" << last_name <<  endl;
#endif // INPUT_STRING

	const int SIZE = 256;
	char sz_buffer[SIZE] = {};
	std::ifstream fin("main.cpp");
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			//fin >> sz_buffer;
			fin.getline(sz_buffer, SIZE);
			cout << sz_buffer << endl;
		}
	}
	else
	{
		std::cerr << "Error: file not found." << endl;
 	}
	fin.close();
}