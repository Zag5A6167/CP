#include<bits/stdc++.h>
using namespace std;


int main(){
    string str;
    cin>> str;
    int a = 0;
    char c;
    for(int i = 0 ;i < str.length();i++){
        if(a > 6){
            break;
        }
        if(str[i] != c){
            c = str[i];

            a = 0;
        }
        if(c == str[i]){
            a++;


        }

    }
    


   
    if(a > 6){
        cout << "YES";
    }else{
        cout << "NO";
    }




    return 0;


}