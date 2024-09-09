#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

#define F first
#define S second
#define ll long long
#define nl "\n"
#define PB push_back

class Solution {
public:
   
};


int main() {    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    string str;
    int s = 0;
    cin >> t;
    while(t--){
        cin >> str;
        for(char c: str){
         if(c == 'T'){
                s += 4;
                
            }else if(c == 'C'){
                s += 6;

            }else if(c == 'O'){
                s += 8;
            }else if(c == 'D'){
                s += 12;
            }else if(c == 'I'){
                s += 20;
            }
        }
    }
    
    cout << s;

 




        return 0;
}