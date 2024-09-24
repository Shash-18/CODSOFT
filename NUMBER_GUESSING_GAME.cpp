#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define s(v) sort(v.begin(),v.end())
#define S(a) sort(a,a+n)
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define bitcount __builtin_popcountll
#define INF 1e18 + 9
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define FIO ios_base::sync_with_stdio(false)
#define rep(i, a, b) for (ll i = a; i < b; i++)

using namespace std;

void solve()
{
    ll a=rand();
	ll w;
	cout<<"GUESS THE NUMBER:";
	
	cin>>w;
	while(w!=a)
	{
       
		if(w-a>0)
		{
			cout<<"provided number is TOO HIGH!."<<endl;
		}
		if(w-a<0)
		{
			cout<<"provided number is TOO LOW!."<<endl;
		}
		cout<<"GUESS THE NUMBER AGAIN:";
		cin>>w;
	}
	cout<<"CONGRATULATIONS! you guessed is right."<<endl;
}

int main()
{
	
		solve();
	
	return 0;
}