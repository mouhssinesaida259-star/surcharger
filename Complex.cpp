#include "Complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double a, double b)
{
	this->re = a;
	this->img = b;
}

Complex::Complex(const Complex& c)
{
	this->re = c.re;
	this->img = c.img;

}

Complex Complex::operator+(Complex n) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + n.re;
	res->img = this->img + n.img;
	return *res;
}

Complex Complex::operator+(double m) const
{
 Complex*res= new Complex(0.0, 0.0);
 res->re = this->re + m;
 res->img = this->img+0.0 ;
 return *res;
}

Complex Complex::operator-(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;
	return *res;
}

Complex Complex::operator/(double r) const
{
	Complex* res = new Complex(0.0, 0.0);
	if (r != 0.0) {
		
		res->re = this->re / r;
		res->img = this->img / r;
		
	}
	else {
		cout << "division incorrect" << endl;
	}
	return * res;
}

Complex Complex::operator/(Complex d) const
{
	Complex* res = new Complex(0.0, 0.0);
	double g = d.re * d.re + d.img * d.img;
	if (g != 0.0) {
		res->re= this->re * d.re + this->img * d.img;
		res->img = this->re * d.img - this->img * d.re;
		
	}
	else {
		cout << "division incorrect" << endl;
	}
	return *res;
}



Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * c.re - this->img * c.img;
	res->img = this->re * c.img + this->img * c.re;
	return *res;
}

Complex Complex::operator*(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * a;
	res->img = this->img * a;
	return *res;
}

int Complex::operator==(Complex c) const
{
	if (this->re == c.re && this->img == c.img) {
		cout << "les deux nombres sont egaux" <<endl;
		return 1;
	}
	else {
		cout << "les nombres sont différents" << endl;
		return 0;
	}
}

int Complex::operator!=(Complex c) const
{
	if (this->re != c.re || this->img != c.img) {
		cout << "les nombres sont differents" << endl;
		return 1;
	}
	else {
		cout << "les deux nombres sont egaux" << endl;
		return 0;
	}
}

int Complex::operator<(Complex c) const
{
	double mod1 = (this->re * this->re) + (this->img * this->img);
	double mod2 = (c.re * c.re) + (c.img * c.img);
	if (mod1 < mod2) {
		cout << "le premier nombre est strictement inferieur" << endl;
		return 1;
	}
	else {
		cout << "le premier nombre n'est pas inferieur" << endl;
		return 0;
	}
}

int Complex::operator>(Complex c) const
{
	double mod1 = (this->re * this->re) + (this->img * this->img);
	double mod2 = (c.re * c.re) + (c.img * c.img);
	if (mod1 > mod2) {
		cout << "le premier nombre est strictement superieur" << endl;
		return 1;
	}
	else {
		cout << "le premier nombre n'est pas superieur" << endl;
		return 0;
	}
}

int Complex::operator<=(Complex c) const
{
	double mod1 = (this->re * this->re) + (this->img * this->img);
	double mod2 = (c.re * c.re) + (c.img * c.img);
	if (mod1 <= mod2) {
		cout << "le premier nombre est inferieur ou egal" << endl;
		return 1;
	}
	else {
		cout << "le premier nombre n'est pas inferieur ou egal" << endl;
		return 0;
	}
}

int Complex::operator>=(Complex c) const
{
	double mod1 = (this->re * this->re) + (this->img * this->img);
	double mod2 = (c.re * c.re) + (c.img * c.img);
	if (mod1 >= mod2) {
		cout << "le premier nombre est superieur ou egal" << endl;
		return 1;
	}
	else {
		cout << "le premier nombre n'est pas superieur ou egal" << endl;
		return 0;
	}
}




void Complex::afficher()
{
	cout << this->re << "+i" << this->img<<endl;
}



Complex::~Complex()
{
}
