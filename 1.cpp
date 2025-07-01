#include <iostream>
using namespace std;
int fact(int k){
    if(k>1){
        return k * fact(k-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(n);
}