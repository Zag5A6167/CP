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




int main() {	
    ios::sync_with_stdio(0);
    cin.tie(0);

 	 int a,b,c;
 	 int t;
 	 cin >> t;
 	 for(int i = 1 ;i <= t;i++){
 	 cin >> a >> b >> c;

 	 vector<int> v1;
 	 v1.push_back(a);
 	 v1.push_back(b);
 	 v1.push_back(c);
 	 sort(v1.begin(),v1.end());


 	 cout << v1[1] << nl;
 	 
 	 }

   	return 0;
}
