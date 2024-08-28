#include <iostream>
#include <stack>
using namespace std;

int main(){
    int number,i;
    stack<int> ans;

    while(cin >> number){
        while(number != 1){
            ans.push(number%2);
            number /= 2;
        }
        cout << "1";

        while(!ans.empty()){
            cout << ans.top();
            ans.pop();
        }
        cout << endl;
    }
    return 0;
}
