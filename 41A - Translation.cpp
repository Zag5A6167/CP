#include <iostream>
#include <set>
#include <cctype>

using namespace std;

#define ll long long

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    

   	string s;
   	cin >> s;
   	string t;
   	cin >> t;
   	string a;


   	for(int i = 0 ; i < s.size();i++){
   		if(s > t || t > s){
   		a = "NO";
   		}
   		if(s[i] == t[s.size() - 1 - i]){
   			a = "YES";
   			
   		}
   		else{
   			a = "NO";
   			break;
   		}
   	}

   	cout << a;
}
