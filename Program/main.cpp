// Lab 5_1
#include <iostream>
using namespace std;

double h(const double& x, const double& y);
void main() {
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	cout << (pow(2, h(abs(p - q), sqrt(abs(p - q)))) +
		h(1, pow(q, 2) - pow(p, 2))) << endl;
}

double h(const double& x, const double& y) {
	return (pow(y, 2) - sqrt(pow(x, 2) + pow(y, 2))) /
		(1 + pow(x, 2) * pow(y, 2));
}