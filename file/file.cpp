#include <iostream>
#include <fstream>

using namespace std;
/*
Three new data types are defined in fstream:
ofstream: Output file stream that creates and writes information to files.
ifstream: Input file stream that reads information from files.
fstream: General file stream, with both ofstream and ifstream capabilities that allow it to create, read, and write information to files.
*/

int main() {
    string line;
    int f=1, i=2;
    ofstream MyFile;
    MyFile.open("test.txt");
    ifstream MyFile2("test2.txt");

    while ( getline (MyFile2, line) ) {
        cout << line << '\n';
    }

    MyFile2.close();

    if (MyFile.is_open()) {
        MyFile << "*BY UNJUNK \n";
    } else {
        cout << "Something went wrong";
    }

    MyFile.close();

    while(++i<5) {
       f*=i;
    }
    cout<<f;
}
