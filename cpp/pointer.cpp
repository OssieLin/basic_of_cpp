#include <iostream>
using namespace std;

int main(){

	cout << "Pointer is a variable that stores a memory address of another variable!" << '\n';
	cout << "& is the address of the memory." << '\n';
	cout << "* is the dereference operator" << '\n';

	int* x = new int (5);
	std::cout << "The pointer "<< x << " points to "<< *x << std::endl;
	
	string name = "Lin";
	string nba[5] = {"warrioirs", "suns", "lakers", "celtics", "knicks"};

	string* pName = &name;
	string* pNba = nba;

	cout << "Name: " << name << '\n';
	cout << "The memory address of name: " << pName << '\n';
	
	cout << "array is already an memory address, so we don't need an operator" << '\n'; 
	cout << "Top 5 nba teams: " << '\n';
	for (int i = 5 - 1; i >= 0; i--) 
    	cout << nba[i] << ", ";
	cout << endl;
	cout << "The memory of \'nba teams\': " << pNba << endl;
	cout << "Pointers are fun!";

	return 0;
}