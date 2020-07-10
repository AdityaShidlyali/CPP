#include <iostream>

int main() {
	cout << "Hello\nWorld"; //Only inserts a new line.
	cout << "Hello" << endl << "World"; //Inserts a new line and flushes the stream
	
	/*
	
    endl is manipulator while \n is character.
    endl doesn’t occupy any memory whereas \n is character so It occupy 1 byte memory.
    We cannot write endl in between double quotation while we can write \n in between double quotation like
    cout<<"\n"; it is right but cout<<"endl"; is wrong.
    We can use \n both in C and C++ but, endl is only supported by C++ and not the C language.

	*/
	return 0;
}
