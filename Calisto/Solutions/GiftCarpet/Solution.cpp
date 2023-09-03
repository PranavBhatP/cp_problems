#include <bits/stdc++.h>
using namespace std;
int main(){
	size_t t;
	cin>>t;
	while(t--){
		size_t n,m;
		cin>>n>>m;
		string x[n];
		string standard = "vika";
		int count{};
		bool status = false;
		for(size_t i = 0;i<n;i++)
			cin>>x[i];
		for(size_t i = 0;i<4;i++){
			status = false;
			for(size_t j = count;j<m;j++){
				for(size_t z = 0;z<n;z++){
					if(x[z][j]==standard[i]){
						count=j+1;
						status = true;
						break;
					}
				}
				if(status)
					break;
			}
			if(!status)
				break;
		}
		cout<<(status?"YES":"NO")<<endl;
	}		
}