#include<iostream>
#include<fstream>

using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	std::fstream fin("201 RAW.txt");
	if (fin.is_open())
	{
		const int IP_BUFFER_SIZE = 16;
		const int MAC_BUFFER_SIZE = 18;
		while (!fin.eof());
	}
	else
	{
		std::cerr << "Error: file not found" << endl;
	}
	fin.close();
}