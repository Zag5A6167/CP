#include<iostream>
using namespace std;

#define long long ll
#define nl "\n"

int main(){
	char str[] = {"codeforces"};
	int size =  sizeof(str)/sizeof(str[0]);
	int t;
	char n;
	
	cin >> t;
	
	while(t--){
		cin >> n;
		if(n == 'c' ||n == 'o'||n == 'd'||n == 'e'||n == 'f'||n == 'r'||n == 'c'||n == 's'){
			cout << "yes";
			cout << nl;
			
		}else{
			cout << "no";
			cout << nl;

		}
	}
	
	

	

}