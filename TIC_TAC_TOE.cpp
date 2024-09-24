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
	string s1,s2;
   cout<<"enter name PLAYER 1:";
   cin>>s1;
   cout<<"enter name PLAYER 2:";
   cin>>s2;
	ll a=rand();
	char grid[3][3];
	rep(i,0,3)
	{
		rep(j,0,3)
		{
			grid[i][j]='_';
		}
	}
	
	if(a%2)
	{
		cout<<"O is assigned to "<<s1<<" and X is assigned to "<<s2<<endl;
		cout<<"Current status of grid:"<<endl;
		rep(i,0,3)
	{
		rep(j,0,3)
		{
			cout<<grid[i][j]<<' ';
		}
		cout<<endl;
	}
		cout<<"ENTER YOUR MOVE AS COORDINATES FOR EXAMPLE:(1,2)"<<endl;

		string s;
		rep(i,0,9)
		{
			if(i%2)
			{
				cout<<s1<<" enter your move:";
				cin>>s;
				grid[s[1]-49][s[3]-49]='O';
						cout<<"Current status of grid:"<<endl;
				rep(i,0,3)
			{
				rep(j,0,3)
				{
					cout<<grid[i][j]<<' ';
				}
				cout<<endl;
			}
			if(grid[0][0]=='O'&&grid[0][1]=='O'&&grid[0][2]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[1][0]=='O'&&grid[1][1]=='O'&&grid[1][2]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[2][0]=='O'&&grid[2][1]=='O'&&grid[2][2]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='O'&&grid[1][0]=='O'&&grid[2][0]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][1]=='O'&&grid[1][1]=='O'&&grid[2][1]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[1][2]=='O'&&grid[1][2]=='O'&&grid[2][2]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='O'&&grid[1][1]=='O'&&grid[2][2]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][2]=='O'&&grid[1][1]=='O'&&grid[2][0]=='O')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}


			}
			else{
				cout<<s2<<" enter your move:";
				cin>>s;
				grid[s[1]-49][s[3]-49]='X';
				cout<<"Current status of grid:"<<endl;
					rep(i,0,3)
				{
					rep(j,0,3)
					{
						cout<<grid[i][j]<<' ';
					}
					cout<<endl;
				}
				if(grid[0][0]=='X'&&grid[0][1]=='X'&&grid[0][2]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[1][0]=='X'&&grid[1][1]=='X'&&grid[1][2]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[2][0]=='X'&&grid[2][1]=='X'&&grid[2][2]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='X'&&grid[1][0]=='X'&&grid[2][0]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][1]=='X'&&grid[1][1]=='X'&&grid[2][1]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[1][2]=='X'&&grid[1][2]=='X'&&grid[2][2]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][2]=='X'&&grid[1][1]=='X'&&grid[2][0]=='X')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			}
		}


	}
	else{
		cout<<"X is assigned to player 1 and O is assigned to player 2."<<endl;
		cout<<"Current status of grid:"<<endl;
		rep(i,0,3)
	{
		rep(j,0,3)
		{
			cout<<grid[i][j]<<' ';
		}
		cout<<endl;
	}
		cout<<"ENTER YOUR MOVE AS COORDINATES FOR EXAMPLE:(1,2)"<<endl;

		string s;
		rep(i,0,9)
		{
			if(i%2)
			{
				cout<<s1<<" enter your move:";
				cin>>s;
				grid[s[1]-49][s[3]-49]='X';
						cout<<"Current status of grid:"<<endl;
				rep(i,0,3)
			{
				rep(j,0,3)
				{
					cout<<grid[i][j]<<' ';
				}
				cout<<endl;
			}
			if(grid[0][0]=='X'&&grid[0][1]=='X'&&grid[0][2]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[1][0]=='X'&&grid[1][1]=='X'&&grid[1][2]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[2][0]=='X'&&grid[2][1]=='X'&&grid[2][2]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='X'&&grid[1][0]=='X'&&grid[2][0]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][1]=='X'&&grid[1][1]=='X'&&grid[2][1]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[1][2]=='X'&&grid[1][2]=='X'&&grid[2][2]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			if(grid[0][2]=='X'&&grid[1][1]=='X'&&grid[2][0]=='X')
			{
				cout<<s1<<" wins."<<endl;
				return;
			}
			

			}
			else{
				cout<<s2<<" enter your move:";
				cin>>s;
				grid[s[1]-49][s[3]-49]='O';
				cout<<"Current status of grid:"<<endl;
					rep(i,0,3)
				{
					rep(j,0,3)
					{
						cout<<grid[i][j]<<' ';
					}
					cout<<endl;
				}
				if(grid[0][0]=='O'&&grid[0][1]=='O'&&grid[0][2]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[1][0]=='O'&&grid[1][1]=='O'&&grid[1][2]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[2][0]=='O'&&grid[2][1]=='O'&&grid[2][2]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='O'&&grid[1][0]=='O'&&grid[2][0]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][1]=='O'&&grid[1][1]=='O'&&grid[2][1]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[1][2]=='O'&&grid[1][2]=='O'&&grid[2][2]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][0]=='O'&&grid[1][1]=='O'&&grid[2][2]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			if(grid[0][2]=='O'&&grid[1][1]=='O'&&grid[2][0]=='O')
			{
				cout<<s2<<" wins."<<endl;
				return;
			}
			}
		}
		cout<<"game ties."<<endl;
	}


}

int main()
{
	
	solve();
	
	return 0;
}