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

    int a,b,c;
    int t;
    cin >> t;
    while(t--){

    cin >> a >> b >> c;
    int sumAB= a + b;
    int sumAC= a + c;
    int sumBC= b + c;

    if(sumAB == c){
    	cout << "YES" << endl;
    }
    else if(sumAC == b){
    	cout << "YES" << endl;
    }else if(sumBC == a){
    	cout << "YES" << endl;
    }else{
    	cout << "NO" << endl;
    }
    }
   

  

   	return 0;
}
