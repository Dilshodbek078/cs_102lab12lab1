#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    long long x, sum = 0;
    while (in >> x) sum += x;
    cout << sum;
    return 0;
}
