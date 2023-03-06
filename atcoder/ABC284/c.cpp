#include <bits/stdc++.h>
const int N = 1010;
std::vector<std::vector<int>> adj(N);
std::vector<bool> visited(N, false);

void dfs(int x)
{
	visited[x]=true;

	for(auto& i : adj[x])
	{
		if(visited[i]==false)
		{
			dfs(i);
		}
	}
}

int main(int argc, char const *argv[])
{
	int n, m, cnt = 0;
	std::cin >> n >> m;
	for(int i = 0; i < m; i ++){
		int u, v;
		std::cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i = 1; i <= n; i ++){
		if(!visited[i]){
			cnt ++;
			dfs(i);
		}
	}
	std::cout << cnt << std::endl;
	return 0;
}