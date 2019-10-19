#ifndef GUESS_H
#define GUESS_H
#include "Peg.h"
#include <iostream>
#include <string>
using namespace std;

class Guess {
private:
	Peg theGuess[4];
public:
	Guess();
	void setGuess(string, string, string, string);
	void setSecretCode();
	//creates an array that passes in index.  Index tells you where the position is in the array.
	Peg operator[](int index);
	friend ostream& operator<<(ostream& out, const Guess& n);
};

#endif //GUESS_H
