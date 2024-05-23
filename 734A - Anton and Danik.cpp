#include <iostream>
#include <set>
#include <cctype>
#include<cmath>
#include<typeinfo>
using namespace std;

#define ll long long
#define nl "\n"

int main() {	

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    int a = 0;
    int d = 0;
    for(int i = 0 ;i < 1;i++){
    	cin >> s;
    	cout << nl;
    	for(int j = 0;j < n;j++){
    		if(s[j] == 'A'){
    			a += 1;
    		}else{
    			d += 1;
    		}
    	}
    }


   if(a > d){
   	cout << "Anton";
   }else if(d > a){
   	cout << "Danik";
   }else{
   	cout << "Friendship";
   }




   	return 0;
}
