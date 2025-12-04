#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int N;
    cin >> N;
    ofstream out("count.txt");
    for (int i = 1; i <= N; i++) {
        out << i;
        if (i < N) out << " ";
    }
    return 0;
}
