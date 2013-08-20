#include "frac.h"
#include <iostream>
#include <cmath>

using namespace std;

Fraction suma(Fraction laca[], int size){
    Fraction result;
    for(int i=0; i<size; i++){
        result = result.add(laca[i]);
    }
    return result;
}

void sort(Fraction laca[], int size){

    Fraction temp;
    for (int i = 0; i < size; i++){
        int min = i;
        for (int j = i + 1; j < size; j++){
            if(!laca[j].gt(laca[min])){
                    min = j;
            }
        }
        swap(laca[i], laca[min]);
    }
}

int main() {

	srand(time(NULL));
	int size = 10;
	Fraction laca[10];

	Fraction boom;

	boom.setNum(45);
	boom.setDenom(54);
	cout << "The first fraction is: ";
	boom.print();

	Fraction chaca;
	chaca.setNum(1);
	chaca.setDenom(3);
	cout << "The second fraction is: ";
	chaca.print();

	cout << "The addition of the fractions is: ";
	boom.add(chaca).print();
	cout << endl;

	cout << "The subtraction of the fractions is: ";
	boom.sub(chaca).print();	
	cout << endl;
	
	cout << "The multiplication of the fractions is: ";
	boom.mul(chaca).print();
	cout << endl;
	
	cout << "The division of the fractions is: ";
	boom.div(chaca).print();
	cout << endl;

	if(boom.gt(chaca)){
		cout << "The first fraction is greater. \n";
	}
	else{
		cout << "The second fraction is greater. \n";
	}

	cout << "The first fraction in its simplest form is: ";
	boom.reduce().print();

	cout << "This is an array of fractions: \n";
        for(int i = 0; i < 10; i++){
                laca[i].setNum(rand()% 8+1);
                laca[i].setDenom(rand()% 8+1);
                laca[i].print();
        }
	

	cout << "The summation of the array is: ";
	Fraction oleke = suma(laca, size);
        oleke.print();

	sort(laca, size);
	cout << "This is the array sorted: \n";

	for(int i = 0; i < size; i++){
            laca[i].print();
        }

	return 0;
}
