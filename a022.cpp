#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[1001];
    char str1[1001];

    cin.getline(str, 1001);

    int count = 0;
    int judge = 0;
    for(int i=strlen(str)-1; i>=0; i--){
        str1[count] = str[i];
        count++;
    }
    
    for(int j=0; j<strlen(str); j++){
        if(str[j] != str1[j]){
            judge = 1;
            break;
        }
    }

    if(judge == 1)
        cout << "no\n" << endl;
    else
        cout << "yes\n" << endl;

    return 0;
}
