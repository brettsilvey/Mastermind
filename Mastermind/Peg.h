#ifndef PEG_H
#define PEG_H
#include<iostream>
using namespace std;

class Peg {
private:
	string color;
	bool check;
	static const string* theColors;
public:
	Peg(string);
	void setRandomColor();
	bool hasBeenChecked() const;

	//Get and set color
	void setColor(string);
	string getColor() const;

	void check(bool);

	//Used to create new pegs and output them.
	friend ostream& operator<<(ostream& out, const Peg&n);
};
#endif //PEG_H
