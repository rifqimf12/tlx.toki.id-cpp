#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    for (int p = s.find(t); p > -1; p = s.find(t)) s.erase(p, t.length());
    cout << s << endl;
}