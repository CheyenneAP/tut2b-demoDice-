#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Dice{
private:    // user cant access this correctly 

	int rollCount;
public:
	Dice(void);
	int roll(void);
	int rollNumber();

};


Dice::Dice(){ // definition of the class, codes given to execute  each of the classes 
	rollCount = 0; // codes executed ny each method
	srand(time(NULL));
}


int Dice::rollNumber(){
	return rollCount;
}

int Dice::roll(){
	rollCount++;
	return(rand() % 6) + 1;
}

int main(){
	// create an instance/object of the class
	Dice MyDice; // object declared

	cout << "Dice has rolled:" << MyDice.rollNumber() << endl;
	cout << "Dice shows:" << MyDice.roll() << endl;
}