#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
#include<vector>
#include<algorithm>
using namespace std;


typedef vector<int> vi;
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
   	cin >> t;
   	int r;

   	while(t--){
   		cin >> r;
   		if(r <= 1399 ){
   			cout << "Division 4" << nl;
   		}else if(r >= 1400 && r <= 1599){
   			cout << "Division 3" << nl;
   		}else if(r >= 1600 && r <= 1899){
   			cout << "Division 2" << nl;
   		}else{
   			cout << "Division 1" << nl;
   		}
   	}
    
   	return 0;
}
