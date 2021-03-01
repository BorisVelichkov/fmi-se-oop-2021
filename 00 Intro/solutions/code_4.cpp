#include <iostream>

void change_var_1(int var) {
	var = 3;
}

void change_var_2(int& var) {
	var = 3;
}

int main(){
	
	int num = 4;
	
	change_var_1(num);
	std::cout << num << std::endl;
	
	change_var_2(num);
	std::cout << num << std::endl;
	
	return 0;
}