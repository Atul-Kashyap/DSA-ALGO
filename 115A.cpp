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
