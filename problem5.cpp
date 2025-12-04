#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream a("a.txt"), b("b.txt");
    long long x;
    int cnt = 0;

    while (a >> x) cnt++;
    while (b >> x) cnt++;

    cout << cnt;
    return 0;
}
