#ifndef COMPLEX_LIB_H
#define COMPLEX_LIB_H

#include <iostream>
#include <stdexcept>

class Complex {
private:
    double real;  // Вещественная часть (a или c)
    double imag;  // Мнимая часть (b или d)

public:
    // Конструктор
    Complex(double r = 0.0, double i = 0.0);

    // Геттеры
    double getReal() const;
    double getImag() const;

    // Операторы согласно формулам (объявления)
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // Метод для вывода
    void print() const;
};

#endif // COMPLEX_LIB_H