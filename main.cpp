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
    vector<int> a;
    int size;
    int n;
    cin >> t;
    string s = "NO";
    cin >> size;
    while(t--){
        cin >> n;

        a.push_back(n);
        a[size];
        for(int i = 0 ;i < a.size();i++){
        for(int j = i + 1;j < a.size();j++){
            if(a[j] < a[i]){
                
                s = "NO";
                break;
            }
            else{
                s = "YES";
            }
        }
    }
    

    }

   





























       	return 0;
}
