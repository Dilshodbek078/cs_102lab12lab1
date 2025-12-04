#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    ofstream out("message.txt");
    out << s;
    return 0;
}
