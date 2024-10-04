#include <iostream>
#include <math.h>

int main(int agrc, char **argv) {
	double x1 = 5;
	float x2 = 3.1f;
	long double x3 = 3L;
	double cosd = cos(x1);
	float cosf = cos(x2);
	long double cosl = cos(x3);

	double x4;
	std::cin >> x4;

	std::cout << cosd << std::endl;
	std::cout << cosf << std::endl;
	std::cout << cosl << std::endl;
	std::cout << "Coseno" << cos(x4) << std::endl;

}
