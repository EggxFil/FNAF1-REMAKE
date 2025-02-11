#include <iostream>

void Print(const std::string &text)
{
	std::cout << text << '\n';
}


void Print(const int& text)
{
	std::cout << text << '\n';
}

std::string returnInput(std::string& text)
{
	std::cin >> text;
	return text;
}