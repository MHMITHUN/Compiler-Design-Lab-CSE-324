#include<bits/stdc++.h>
using namespace std;

bool isFirstCharecterValid(char c){
    return isalpha(c)||c=='_';
}

bool isRemainingCharacterValid(string str){
    for (int i = 1;i<str.length();i++){
        if (isalnum(str[i]) && str[i]=='_'){
            return true;
        }
    }
    return false;
}


int main(){
    string inp;
    cout<< "Enter the identifier : ";
    cin >> inp;

    if (inp.empty()||isFirstCharecterValid(inp[0])){
        cout << "Invalid Identifier. ";
    }
    else if(isRemainingCharacterValid(inp)){
        cout << "Valid Identifer. ";
    }
    else{
        cout << "Invalid Identifier. ";
    }
}