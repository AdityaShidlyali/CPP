// unordered_map in STL

// syntax : std::unordered_set<type> set_name;

// NOTE:
// 1. unordered_map is a associative container that contains key value pair with unique keys.
// 2. search, insertion, removal have average constant time complexity.
// 3. Internally the elements are organised into buckets (concept of heap).
// 4. It uses hashing to insert the elements into buckets.
// 5. This allows the fast access to individual elements, because after computing the hash of the value 
//     it refers to the exact bucket where the elements is placed into.

// Why unordered_map?
// maintain collection of unique <key, value> pair with fast insertion and removal.	

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, char> umap = { {2, 'a'}, {1, 'b'} };
    
    cout << umap[2] << endl;
    cout << umap[1] << endl;
    
    umap[3] = 'c';
    
    for (auto &ele : umap) {
    	cout << ele.first << " " << ele.second << endl;
	}
	return 0;
}

