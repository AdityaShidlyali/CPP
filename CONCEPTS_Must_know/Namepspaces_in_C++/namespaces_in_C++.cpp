#include <iostream>

/*
More on namespaces
https://www.geeksforgeeks.org/namespace-in-c-set-2-extending-namespace-and-unnamed-namespace/

https://www.geeksforgeeks.org/namespace-c-set-3-creating-header-nesting-aliasing-accessing/
*/

using namespace std;

namespace my_name {
	int i = 10;
}

int main() {
	cout << my_name :: i;
	return 0;
}
