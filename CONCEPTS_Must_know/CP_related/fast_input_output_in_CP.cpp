//Please read this article : https://www.geeksforgeeks.org/fast-io-for-competitive-programming/

#include <iostream>

using namespace std;

int main() {
	//But it is better to take the input by using scanf() and printf() instead of cin and cout
	
	//Invoking these two lines makes the input output faster
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	//Use \n instead of endl because endl is slower than \n
	//solve this for checking your input output runtime :https://www.spoj.com/problems/INTEST/
	
	
	return 0;
}
