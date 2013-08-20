//Autores			Jose de la Vega
//					Julio de la Cruz
//Email				j.r.delavega17@gmail.com
//					jjdl_cn@hotmail.com
//					Estructura de Datos

#include "frac.h"
#include <iostream>
using namespace std;

Fraction::Fraction(){
	num = 0;
	denom = 1;
}

Fraction::Fraction(int n, int d){
	num = n;
	denom = d;
}

void Fraction::setNum(int n){
	num = n;
}

void Fraction::setDenom(int d){
	denom = d;
}

int Fraction::getNum(){
	return num;
}

int Fraction::getDenom(){
	return denom;
}

void Fraction::print(){
	cout << num << "/" << denom << endl;
}

Fraction Fraction::add(const Fraction& F) const{
	Fraction result;
	if(denom == F.denom){
		result.num = num + F.num;
		result.denom = denom;
	}
	else{
		result.denom = denom * F.denom;
		result.num = ((num* F.denom) + (F.num * denom));
	}
	return result;
}

Fraction Fraction::sub(const Fraction& F) const{
        Fraction result;
        if(denom == F.denom){
                result.num = num - F.num;
                result.denom = denom;
        }
        else{
                result.denom = denom * F.denom;
                result.num = ((num* F.denom) - (F.num * denom));
        }
        return result;
}

Fraction Fraction::mul(const Fraction& F) const{
        Fraction result;

        result.denom = denom * F.denom;
        result.num = num * F.num;
        
        return result;
}

Fraction Fraction::div(const Fraction& F) const{
        Fraction result;

        result.denom = denom * F.num;
        result.num = num * F.denom;
        return result;
}

bool Fraction::gt(const Fraction& F) const{
        Fraction result;
	int a;
	int b;
	a = num * F.denom;
	b = F.num * denom;
        if(a >= b){
		return true;
        }
        else{
		return false;
        }
}

int Fraction::gcd(int a, int b){
    if(a < b){
        return gcd(b,a);
    }
    else if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

Fraction Fraction::reduce(){
    Fraction result;
    int a = num;
    int b = denom;
    int mcd = gcd(a,b);
    result.num = num / mcd;
    result.denom = denom / mcd;

    return result;
}

