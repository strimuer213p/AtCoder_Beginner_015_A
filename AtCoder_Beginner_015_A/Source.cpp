#include<iostream>
#include<string>

int main() {
	std::string str1,str2;
	std::cin >> str1;
	std::cin >> str2;

	str1.size() > str2.size() ? std::cout << str1 << std::endl : std::cout << str2 << std::endl;

	return 0;
}