#include <iostream>
template <typename t>
void Print(const t& text)
{
	std::cout << text << '\n';
}
std::string returnInput(std::string& text)
{
	std::cin >> text;
	return text;
}