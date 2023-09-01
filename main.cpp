#include <iostream>
#include "singleton.h"

int main() {
	Singleton<char>& obj = Singleton<char>::Instance(); //using reference to avoid copy constructor usage cause it is singletone object
	std::cout << obj.get_data() << std::endl;
	obj.set_data('c');
	std::cout << obj.get_data() << std::endl;
}