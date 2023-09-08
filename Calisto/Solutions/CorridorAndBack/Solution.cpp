#include <bits/stdc++.h>
using namespace std;
int main(){
	size_t t;
	cin>>t;
	while(t--){
		size_t n;
		cin>>n;
		double sum,d,s;
		sum = 100000000;
		while(n--){
			int a,b;
			cin>>a>>b;
			sum = min(sum,a+floor((b-1)/2));
		}
		cout<<sum<<endl;
	}
}
