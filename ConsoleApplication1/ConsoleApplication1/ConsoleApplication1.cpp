// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <String>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string str;
	std::cout << "Please enter your name: ";
	std::cin >> str;
	std::cout << "Hello " << str << std::endl;
	std::cin.get();
	return 0;
}

