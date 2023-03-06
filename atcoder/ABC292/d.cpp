#include <bits/stdc++.h>
const int N = 200010;
std::vector<std::vector<int> > adj(N, std::vector<int>());
int ver, edg;
std::vector<bool> visited(N, false);
void dfs(int u){
	visited[u] = true;
	for(auto& t: adj[u]){
		
		edg ++;

		if(!visited[t]){
			ver ++ ;

			dfs(t);
		}
		
	}

}

void solve(){
	int n, m;
	std::cin >> n >> m;
	for(int i = 0; i < m; i ++){
		int u, v;

		std::cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i = 0; i < n; i ++){
		int V = 0, E = 0;
		std::queue<int> q;
		


	}


}
int main(int argc, char** argv){
	solve();
	return 0;
}