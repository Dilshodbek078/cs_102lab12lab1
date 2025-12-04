#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("text.txt");
    string line;
    int count = 0;
    while (getline(in, line)) count++;
    cout << count;
    return 0;
}
