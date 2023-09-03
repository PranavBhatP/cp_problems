#include <bits/stdc++.h>
using namespace std;
int main(){
	size_t t;
	cin>>t;
	while(t--){
		size_t n,k;
		cin>>n>>k;
		if(log2(n)<k){
			cout<<n+1<<endl;
		}
		else{
			cout<<floor(pow(2,k))<<endl;
		}
	}
}
