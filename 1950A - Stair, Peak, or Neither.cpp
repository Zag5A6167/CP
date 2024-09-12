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


    int a,b,c,t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a < b && b < c){
            cout << "STAIR" << "\n";
        }
        else if(a < b && b > c){
            cout << "PEAK" << "\n";
        }else{
            cout << "NONE" << "\n";
        }

    }





       	return 0;
}