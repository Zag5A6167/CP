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
 	cin >> t;
 	string s;
 	string d = "codeforces";
 	while(t--){
 		cin >> s;
 	int ans = 0;
 		for(int i = 0 ;i < s.size();i++){
 			if(s[i] != d[i]){
 				ans += 1;
 			}
 		}
 		cout << ans << nl;
 	}









   	return 0;
}
