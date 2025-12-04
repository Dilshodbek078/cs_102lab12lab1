#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("even.txt");
    int x;
    bool first = true;
    while (in >> x) {
        if (x % 2 == 0) {
            if (!first) {
                out << " ";
                cout << " ";
            }
            out << x;
            cout << x;
            first = false;
        }
    }
    return 0;
}
