#include <iostream>
#include <string>
using namespace std;

string getBinary(int x) {
    if (x == 1) {
        return "1";
    } else if (x % 2 == 1) {
        return getBinary(x / 2) + "1";
    } else {
        return getBinary(x / 2) + "0";
    }
}

int main() {
    int n;
    cin >> n;
    cout << getBinary(n) << endl;
}