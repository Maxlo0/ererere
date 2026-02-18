#include "complex_lib.h"
using namespace std;

// Конструктор
Complex::Complex(double r, double i) : real(r), imag(i) {}

// Геттеры
double Complex::getReal() const { return real; }
double Complex::getImag() const { return imag; }

// Оператор сложения: z1 + z2 = (a + c) + (b + d)i
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// Оператор вычитания: z1 - z2 = (a - c) + (b - d)i
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// Оператор умножения: z1 * z2 = (ac - bd) + (bc + ad)i
Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag,
        imag * other.real + real * other.imag);
}

// Оператор деления: z1 / z2 = ((ac + bd) / (c^2 + d^2)) + ((bc - ad) / (c^2 + d^2))i
Complex Complex::operator/(const Complex& other) const {
    double denom = other.real * other.real + other.imag * other.imag;
    if (denom == 0) {
        throw invalid_argument("Деление на ноль");
    }
    return Complex((real * other.real + imag * other.imag) / denom,
        (imag * other.real - real * other.imag) / denom);
}

// Метод для вывода
void Complex::print() const {
    cout << real << " + " << imag << "i";
}