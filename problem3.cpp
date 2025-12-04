#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("numbers.txt");
    long long x, mx;
    if (!(in >> mx)) return 0;
    while (in >> x) if (x > mx) mx = x;
    cout << mx;
    return 0;
}
