#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);

	std::cout << "triangle (0, 0) (1, 0) (0, 1)\n";

	std::cout << "(0, 0) is in the triangle: " << bsp(a, b, c, Point(0, 0)) << "\n";
	std::cout << "(1, 0) is in the triangle: " << bsp(a, b, c, Point(1, 0)) << "\n";
	std::cout << "(0, 1) is in the triangle: " << bsp(a, b, c, Point(0, 1)) << "\n";
	std::cout << "(0.3, 0.3) is in the triangle: " << bsp(a, b, c, Point(0.3, 0.3)) << "\n";
	std::cout << "(0.347, 0.337) is in the triangle: " << bsp(a, b, c, Point(0.3, 0.3)) << "\n";
	std::cout << "(-0.5, 0.5) is in the triangle: " << bsp(a, b, c, Point(-0.5, 0.5)) << "\n";
	std::cout << "(0.5, -0.5) is in the triangle: " << bsp(a, b, c, Point(0.5, -0.5)) << "\n";

	return 0;
}
