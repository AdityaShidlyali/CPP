// unordered_map in STL

// syntax : std::unordered_set<type> set_name;

// NOTE:
// 1. unordered_map is a associative container that supports equivalent keys (an unordered multimap may
//     contain multiple copies of each key value) and that associates values of another type with the keys.	
// 2. search, insertion, removal have average constant time complexity.
// 3. Internally the elements are organised into buckets (concept of heap).
// 4. It uses hashing to insert the elements into buckets.
// 5. This allows the fast access to individual elements, because after computing the hash of the value 
//     it refers to the exact bucket where the elements is placed into.

// Why unordered_map?
// maintain collection of duplicate values <key, value> pair with fast insertion and removal.

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_multimap<int, char> umap = { {2, 'a'}, {1, 'b'} };
    
    umap.insert(std::pair<int, int>(10, 'e'));
    umap.insert((std::make_pair(11, 'r')));
    umap.insert({5, 'd'});
    
    for (auto &ele : umap) {
    	cout << ele.first << " " << ele.second << endl;
	}
    
	return 0;
}
