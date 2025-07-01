#include <iostream>
#include <algorithm>
using namespace std;
int Powe(int a, int b){
    if(b==0){
        return 1;
    }
    return a *Powe(a, b-1);
}
int main() {
    int a, b;
    cin >> a >> b;

    cout << Powe(a, b) << endl;

    return 0;
}