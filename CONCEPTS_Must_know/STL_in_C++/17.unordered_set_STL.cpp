// unordered set in STL

// syntax : std::unordered_set<type> set_name;

// NOTE:
// 1. Unordered set is a associative container that contains set of unique objects.
// 2. search, insertion, removal have average constant time complexity.
// 3. Internally the elements are organised into buckets (concept of heap).
// 4. It uses hashing to insert the elements into buckets.
// 5. This allows the fast access to individual elements, since once a hash is computed,
//    it refers to the exact bucket the element is placed into.

// Why Unordered set?
// maintain collection of unique items with fast inserion and removal.

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set <int> uset = {4, 13, 1, 2, 4, 3};
    
    auto search = uset.find(2);
    if (search != uset.end()) {
    	cout << "Found " << (*search) << endl;
	}
	else {
		cout << "Not found " << (*search) << endl;
	}
	
	cout << "The elements in the set are : " << endl;
	for (auto &ele : uset) {
		cout << ele << " ";
	}
	return 0;
}
