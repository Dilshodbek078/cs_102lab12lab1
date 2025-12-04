#include <fstream>
using namespace std;

int main() {
    ifstream in("source.txt");
    ofstream out("copy.txt");
    out << in.rdbuf();
    return 0;
}
