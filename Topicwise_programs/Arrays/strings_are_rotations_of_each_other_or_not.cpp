#include <iostream>

using namespace std;

string rotate(string str, int len) {
	char temp = str[0];
	for (int i=0; i<len - 1; i++) {
		str[i] = str[i+1];
	}
	str[len - 1] = temp;
	return str;
}

int main() {
	string str1, str2;
	cout << "Enter first string : ";
	cin >> str1;
	cout << "Enter second string : ";
	cin >> str2;
	
	if (str1.length() != str2.length()) {
		cout << "Enter strings of same length";
	}
	else {
		int flag = 0;
		int len = str1.length();
		string rot_str = str1;
		for (int i=0; i<len; i++) {
			if (rot_str == str2) {
				flag = 1;
				break;
			}
			rot_str = rotate(rot_str, len);
		}
		
		if (flag == 1) {
			cout << "Entered strings are the rotations of each other";
		}
		else {
			cout << "Entered strings are not the rotations of each other";
		}
	}
	return 0;
}
