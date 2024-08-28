#include <iostream>
using namespace std;

//gcd(a,b)=gcd(a-b,b)

int gcd(int a, int b){
    int next = a%b;

    if(next != 0)
        gcd(b,next);

    return b;
}

int main(){
    int a,b,next;

    cin >> a >> b;
    next = a%b;
    while(next != 0){
        a = b;
        b = next;
        next = a%b;
    }
    
    cout << b << endl;

    return 0;
}
