//Problem : https://www.spoj.com/problems/INTEST/

//Must read this : https://www.thegeekstuff.com/2015/01/c-cpp-code-optimization/

//This program takes the 0.40sec
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	int count = 0;
	cin >> n >> k;
	while ( n-- ) {
		int t;
		fflush(stdin);
		cin >> t;
		if ( t%k == 0 ) {
			count++;
		}
	}
	cout << count;
	return 0;
}



/*
This program takes the 0.42sec


#include <iostream>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k;
	int count = 0;
	scanf("%d %d", &n, &k);
	while ( n-- ) {
		int t;
		scanf("%d", &t);
		if ( t%k == 0 ) {
			count++;
		}
	}
	cout << count;
	return 0;
}
*/
