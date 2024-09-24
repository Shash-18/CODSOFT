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
   float a,b;
	
	string s;
	cout<<"1.ADD for ADDITION"<<endl<<"2.SUBTRACT for SUBTRACTION"<<endl<<"3.MULTIPY for MULTIPLICATION"<<endl<<"4.DIVIDE for DIVISION"<<endl<<"enter operation to perform:";
	cin>>s;
	if(s=="ADD")
	{
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;
		cout<<"ADDITION of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
	}
	if(s=="SUBTRACT")
	{
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;
		cout<<"SUBTRACTION of "<<a<<" and "<<b<<" is:"<<a-b<<endl;
	}
	if(s=="MULTILPY")
	{
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;
		cout<<"MULTIPLICATION of "<<a<<" and "<<b<<" is:"<<a*b<<endl;
	}
	if(s=="DIVIDE")
	{
		cout<<"enter first number:";
		cin>>a;
		cout<<"enter second number:";
		cin>>b;
		cout<<"DIVISION of "<<a<<" and "<<b<<" is:"<<a/b<<endl;
	}

}

int main()
{
	
		solve();
	
	return 0;
}