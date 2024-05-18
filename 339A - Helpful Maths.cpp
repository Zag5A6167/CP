#include<bits/stdc++.h>
#include<cctype>

using namespace std;



int main(){
	string s;
	cin >> s;
	int n = sizeof(s)/sizeof(s[0]);
	string temp;
	for(int i = 0;i < s.size();i++){
		if(isdigit(s[i])){
			temp += s[i];
		}
	}
	bool swapped;
	for(int i = 0;i< temp.size() - 1;i++){
		swapped = false;
		for(int j = 0 ;j< temp.size() -i - 1;j++){
			if(temp[j] > temp[j + 1]){
				swap(temp[j], temp[j + 1]);
				swapped = true;
			}
		}
		if(swapped == false){
			 break;
		}
	}
	for(int i = 0;i < temp.size();i++){

			cout << temp[i];
			if(i == temp.size()-1){
				break;
			}
			cout << "+";
		
		
		
	}
	
	
return 0;
}	

