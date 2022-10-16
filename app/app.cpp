#include "app.h"

#include <cstdarg>
#include <format>

namespace vsite::oop::p1 {

/*
* function implementations
*/
	double f1(int a, int b) {
		return pow(a, b);
	}

	bool f2(bool a) {
		return !a;
	}


	int f3(int a, int b, int c, int d) {
		return 20;
	}
	int f3(int a, int b, int c) {
		return 22;
	}
	int f3(int a, int b) {
		return 22;
	}
	int f3(int a) {
		return 29;
	}
	int f3() {
		return 10;
	}

	std::string f4(int a) {
		return "int";
	}
	std::string f4(bool a) {
		return "bool";
	}
	std::string f4(double a) {
		return "double";
	}

} // namespace
