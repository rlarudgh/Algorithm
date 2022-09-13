#include<iostream>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        if(str.length() >= 6 && str.length() <= 9) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}