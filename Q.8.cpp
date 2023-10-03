#include <iostream>
#include <cmath>
using namespace std;
void findRootsOfQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
        cout<< "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    std::cout << "Enter coefficient c: ";
    std::cin >> c;

    if (a == 0) {
        cerr << "Coefficient 'a' should be non-zero for a quadratic equation." << endl;
        return 1;
    }

    cout << "Quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    findRootsOfQuadraticEquation(a, b, c);

    return 0;
}

