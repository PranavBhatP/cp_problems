#include <bits/stdc++.h>
using namespace std;
int main(){
	size_t t;
	cin>>t;
	while(t--){
		size_t n;
		cin>>n;
		string s;
		cin>>s;
		vector<string> r;
		for(size_t i = 0;i<n-1;i++){
			string a = "";
			a+=s[i];
			a+=s[i+1];
			if(!count(r.begin(),r.end(),a))
				r.push_back(a);
		}
		cout<<r.size()<<endl;
	}
}
