#include<bits/stdc++.h>
using namespace std;
bool vis[2002];
int ans = 0;
vector<int> v[2002],v1;

void dfs(int id,int depth){
 vis[id] = true;
 ans = max(ans,++depth);
 for(int a : v[id]){
   if(!vis[a]) 
     dfs(a,depth);
 }
}

int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0); 
 int n,a; cin >> n;
 for(int i = 1; i <= n; i++){
   cin >> a;
   if(a != -1)
   v[a].push_back(i);
   else
   v1.push_back(i);  
 }
 memset(vis,0,sizeof(vis));
 for(int i = 0; i < v1.size(); i++){
     dfs(v1[i],0);
 }
 cout << ans << endl;
 return 0;
}

/*
int n;
int vis[N];
vector< int >adj[N];
int dfs( int node )
{
	vis[ node ] = 1;
	int nv = adj[ node ].size();
	int maxi = 0;
	for( int k = 0 ; k < nv ; ++k )
	{
		int son = adj[ node ][ k ];
		maxi = max( maxi , 1 + dfs( son ) );
	}
	return maxi;
}
int main()
{
	while( cin >> n )
	{
		for( int i = 0 ; i < n ; ++i )adj[i].clear();
		for( int i = 0 ; i < n ; ++i )
		{
			int x ;
			sc( x );
			if( x == -1 )continue;
			x--;
			adj[x].push_back( i ); 
		}
		me( vis, 0 );
		int maxi = 0;
		for( int i = 0 ; i < n ; ++i )
			if( !vis[i] )
				maxi = max( maxi ,1 + dfs( i ) );
		cout << maxi << "\n";
	}
} */