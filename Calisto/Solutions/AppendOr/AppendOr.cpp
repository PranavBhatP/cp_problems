#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define st size_t
#define rep(a,b) for(int i = a;i<b;i++)
#define repi(a,b) for(int i = a;i<b;i++)
#define repj(a,b) for(int j = a;j<b;j++)
#define vi vector<int>

#define output(a) {for(int i = 0;i<n;i++) cout<<a[i]<<" "; cout<<endl;}
#define input(a) for(int i = 0;i<n;i++) {cin>>a[i];}

/*
                                     d88b
                     _______________|8888|_______________
                    |_____________ ,~~~~~~. _____________|
  _________         |_____________: mmmmmm :_____________|         _________
 / _______ \   ,----|~~~~~~~~~~~,'\ _...._ /`.~~~~~~~~~~~|----,   / _______ \
| /       \ |  |    |       |____|,d~    ~b.|____|       |    |  | /       \ |
||         |-------------------\-d.-~~~~~~-.b-/-------------------|         ||
||         | |8888 ....... _,===~/......... \~===._         8888| |         ||
||         |=========_,===~~======._.=~~=._.======~~===._=========|         ||
||         | |888===~~ ...... //,, .`~~~~'. .,\\        ~~===888| |         ||
||        |===================,P'.::::::::.. `?,===================|        ||
||        |_________________,P'_::----------.._`?,_________________|        ||
`|        |-------------------~~~~~~~~~~~~~~~~~~-------------------|        |'
  \_______/                                           _ Cal2509 _  \_______/
  
*/

int solve(){
	st n,y;
	cin>>n>>y;
	st a[n];
	input(a);
	int out = a[0];
	rep(0,n){
		out |= a[i];
	}
	if(out>y){
		cout<<"-1"<<endl;
		return 0;
	}
	else{
		st diff = y - out;
		st diff_copy = diff;
		while(diff>=1){
			st power = log2(diff);
			st mask = 1<<power;
			if((out|mask)==out){
				cout<<"-1"<<endl;
				return 0;
			}
			out|=mask;
			diff = y - out;
		}
		cout<<diff_copy<<endl;
		return 0;
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	st t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}