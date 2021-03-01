#include <iostream>

int main(){
	int* a = new int[5];
	
	for(int i = 0; i < 5; i++) {
		a[i] = i * 10;
	}
	
	std::cout << a[2] << std::endl;
	return 0;
}