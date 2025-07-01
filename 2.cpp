#include <iostream>
#include <algorithm>
using namespace std;
string Reversed(string s) {
    if (s.length() <= 1){
        return s;
    }
    return Reversed(s.substr(1)) + s[0];

}
int main() {
    string n;
    getline(cin,n);
    cout << Reversed(n);
  return 0;
}