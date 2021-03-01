#include <iostream>

int main(){
	
	int a = 5;
	int* b = &a;
	int* c = &a;
	int& d = a;
	
	*b = 6;
	std::cout << a << std::endl;
	
	c = 0;
	std::cout << a << std::endl;
	
	d = 12;
	std::cout << a << std::endl;
	return 0;
}