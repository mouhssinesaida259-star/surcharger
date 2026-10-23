#pragma once
class Complex {
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(const Complex& c);
	Complex operator+(Complex n)const;
	Complex operator+(double m)const;
	Complex operator-(Complex c )const;
	Complex operator/(double)const;
	Complex operator / (Complex)const;
	Complex operator*(Complex )const;
	Complex operator*(double)const;
	int operator==(Complex c) const;
	int operator!=(Complex c) const;
	int operator<(Complex c) const;
	int operator>(Complex c) const;
	int operator<=(Complex c) const;
	int operator>=(Complex c) const;
	void afficher();
	~Complex();
};
