#include <iostream>
#include <string>
#include<stdio.h>

using namespace std;

int main() {
    string word;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    cin >> word;
    for(int i = 0; i < alp.length(); i++){
        int nums = word.find(alp[i]);
        printf("%d ", nums);
    }
    return 0;
}