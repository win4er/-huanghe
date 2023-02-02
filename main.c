#include <iostream>

int foo() {
	static int countCall = 0;
	countCall++;

	return countCall;
}


int show() {

	static int deepRec = 0;
	deepRec++;
    foo();
	std::cout << deepRec << std::endl;
	if (deepRec > 5) {
		std::cout << "0 end show" << std::endl;
		return deepRec;
		deepRec = 0;
	}

	show();

	std::cout << "end show" << std::endl;
	deepRec = 0;
	return 0;
}

int main() {

	show();
	show();

	std::cout << foo() << std::endl;

	return 0;
}
