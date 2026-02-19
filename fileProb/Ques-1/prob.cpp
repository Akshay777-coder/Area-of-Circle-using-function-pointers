#include <iostream>
#include <fstream>
using namespace std;

int main(){
//1. Write to a file
    string str1 = "Hello, file handling";
    ofstream out("data.txt");
    out << str1;

    return 0;
}
