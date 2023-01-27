#include <iostream>

int foo() {
	static int countCall = 0;
	countCall++;

	return countCall;
}

int foo1() {
	static int countCall = 0;
}

int show() {

	static int deepRec = 0;
	deepRec++;

	std::cout << deepRec << std::endl;
	if (deepRec > 5) {
		std::cout << "0 end show" << std::endl;
		return deepRec;
	}
	deepRec = 0;
	show();

	std::cout << "end show" << std::endl;
	deepRec = 0;
	return 0;
}

int main() {

	show();
	show();
	return 0;

	for (int i = 0; i < 10; i++) 
		std::cout << 	foo() << std::endl;

	return 0;
}
