
#include <cmath>
bool is_valid(double side1, double side2, double side3) {
	if ((side1 + side2) > side3 && (side1 - side2) < side3) {
		return true;
	}
	return false;
}
double area(double side1, double side2, double side3) {
	double s,r;
	s = (side1 + side2 + side3)/ 2;
	r = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return r;
}