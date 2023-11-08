#include <iostream>
#include <cmath>

double f(double x) 
{
    return sin(x) - cos(x);
}

double findRoot(double a, double b, double eps) {
    if (b - a < eps) {
        return (a + b) / 2.0;
    }

    double m = (a + b) / 2.0;
    double fm = f(m);

    if (fm == 0) {
        return m;
    }

    if (f(a) * fm < 0) {
        return findRoot(a, m, eps);
    } else {
        return findRoot(m, b, eps);
    }
}

int main() {
    double a = 0.0;
    double b = 1.0;
    double eps = 1e-6;
    
    double root = findRoot(a, b, eps);
    
    std::cout << "Знайдений корінь: " << root << std::endl;
    return 0;
}
