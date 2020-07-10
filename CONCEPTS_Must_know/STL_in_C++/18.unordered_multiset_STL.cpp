// unordered_multiset in STL

// syntax : std::unordered_set<type> set_name;

// NOTE:
// 1. unordered_multiset is a associative container that contains set of possible non-unique objects.
// 2. search, insertion, removal have average constant time complexity.
// 3. Internally the elements are organised into buckets (concept of heap).
// 4. It uses hashing to insert the elements into buckets.
// 5. This allows the fast access to individual elements, because after computing the hash of the value 
//     it refers to the exact bucket where the elements is placed into.

// Why unordered_multiset?
// maintain collection of non-unique items with fast inserion and removal.

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_multiset<int> umset = {4, 1, 2, 3, 9, 4, 3, 2, 9, 8, 10};
    
    auto search = umset.find(2);
    if (search != umset.end()) {
    	cout << "Found " << (*search) << endl;
	}
	else {
		cout << "Not found" << endl;
	}
	
	cout << "The elements in the unordered multiset are : " << endl;
	for (auto &ele : umset) {
		cout << ele << " ";
	}
    
	return 0;
}
