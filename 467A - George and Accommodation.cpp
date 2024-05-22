#include <iostream>
#include <set>
#include <cctype>

using namespace std;

#define ll long long

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    

   	int t,p,q;
   	cin >> t;
   	
   	int ans = 0;
   	while(t--){
   		cin >> p >> q;
   		
   		if(q - p > 1){
   			ans++;
   		}
   	}

   	cout << ans;


   	return 0;
}
