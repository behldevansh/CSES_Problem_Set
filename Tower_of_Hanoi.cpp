#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
 
vector < pair < int , int > > sol;
 
void recurse(int n, int from, int to, int with){
 
	if(n==0){
		return;
	}
 
	recurse(n-1,from,with,to);
	sol.push_back(make_pair(from,to));
	recurse(n-1,with,to,from);
 
}
 
void doit(){
 
	int n;
	cin >> n;
	
	// from, to, with (helping position)
	recurse(n,1,3,2);	
 
	cout << S(sol) << '\n';
	rep(0,S(sol)-1){
		cout << sol[i].first << " " << sol[i].second << '\n';	
	}
	
}
 
#undef int
int main(){
 
	int t = 1;
	// cin >> t; // uncomment for multi-tests
 
	while(t--){
		doit();
	}
 
}