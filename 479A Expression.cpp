#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
#include<vector>
#include<algorithm>
#include<set>
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

    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int max = 0;

    if(a + b * c > max){
        max = a + b * c;
    
    }if(a*(b+c) > max){
        max = a * (b+c);
    }if(a * b * c > max){
        max = a * b * c;

    }if((a+b)*c > max){
        max = (a+b)*c;
    }if(a == b && b == c){
        max = a + b + c;
    if(a != 1 || b != 1 || c != 1 && a == b && a == c){
        max = a * b * c;
    }
    }if(a == 1 && c == 1){
        max = a+b+c;
    }


    cout << max;

       	return 0;
}