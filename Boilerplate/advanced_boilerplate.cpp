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
  \_______/                                                        \_______/
  
*/

int solve(){
	//Write your Code here!
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
/*
doing a bitwise OR operation can only increase or make hte number stay the same but it cannot decrease the number. Also when, it is increasing the number, it can only do so in magnitudes of the bits that are currently 0 in the number. So in order for it to not be able to give an output, it should be because the bit is already occupied in the number. Hence we can do this using a while loop in my opinion or any other method that is repetitive over the pwoers of 2.
*/
/*
Some Important Facts:

1) Binary XOR of an even number and its next number is always equal to 1. 
*/