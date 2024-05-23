#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
#include<vector>
using namespace std;


typedef vector<int> vi;
#define ll long long
#define nl "\n"

int main() {	
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int a,b,c;
   	int p = 0;
   	int m = 0;
    while(t--){
    	cin >> a >> b >> c;
    	p = a + b;
    	m = a - b;
    	if(p == c){
    		cout << "+" << nl;
    	}else{
    		cout << "-" << nl;
    	}
    }



  

   	return 0;
}
