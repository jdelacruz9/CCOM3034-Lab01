//Autores			Jose de la Vega
//					Julio de la Cruz
//Email				j.r.delavega17@gmail.com
//					jjdl_cn@hotmail.com
//					Estructura de Datos

#ifndef FRAC_H
#define FRAC_H

class Fraction{
	private: 
		int num, denom;
	public: 
		Fraction();
		Fraction(int n, int d);
		void setNum(int n);
		void setDenom(int d);
		int  getNum();
		int  getDenom();
		void print();
		Fraction add(const Fraction& F) const;
		Fraction sub(const Fraction& F) const;
		Fraction mul(const Fraction& F) const;
		Fraction div(const Fraction& F) const;
		bool gt(const Fraction& F) const;
		Fraction reduce();
                int gcd(int a, int b);

};

#endif
