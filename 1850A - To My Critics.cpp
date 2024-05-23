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

 	 int a,b,c,t,r1,r2,r3;
 	 cin >> t;
 	 while(t--){
 	 	cin >> a >> b >> c;
 	 	r1 = a+b;
 	 	r2 = b+c;
 	 	r3 = a+c;
 	 	if(r1 >= 10){
 	 		cout << "YES" << nl;

 	 	}
 	 	else if(r2 >= 10){
 	 		cout << "YES" << nl;
 	 	}
 	 	else if(r3 >= 10){
 	 		cout << "YES" << nl;
 	 	}else{
 	 		cout << "NO" << nl;
 	 	}
 	 }

   	return 0;
}
