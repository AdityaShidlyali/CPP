//Opening file and writing and reading the file

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char str[500];
    cout << "Enter a string to append : " ;
    cin.getline(str, 499);
    ofstream filestream;
    filestream.open("text.txt");
    filestream << str;
    filestream.close();

    int choice;
    cout << "\nEnter 1 to read file (or 0 to exit) : ";
    cin >> choice;
    if (choice == 1) {
        ifstream filestream;
        string read;
        filestream.open("text.txt");
        cout << "\nThe content in the file is : " << endl;
        while (getline (filestream, read)) {
            cout << read << endl;
        }
        filestream.close();
    }
    else {
        filestream.close();
        cout << "The file has been closed";
    }
    return 0;
}

