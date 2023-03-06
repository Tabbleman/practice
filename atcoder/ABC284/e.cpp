#include <bits/stdc++.h>
const int N = 200010;
int n, m;
std::vector<int> v;
std::vector<std::vector<int> > g(N, v);

std::vector<bool> visited(N, false);

int dfs(int u){
	int sum = 1;
	for(auto&t: g[u]){

		if(sum >= 1e6)
			return 1e6;
		if(!visited[t]){
			visited[t] = 1;
			sum = sum + dfs(t);
			visited[t] = 0;
		}


	}
	return std::min(sum, 1000000);
}

int main(int argc, char const *argv[])
{
	std::cin >> n >> m;
	for(int i = 0; i < m; i ++)
	{
		int u, v;
		std::cin >> u >> v;
		g[u].push_back(v), g[v].push_back(u);
	}
	visited[1] = true;
	std::cout << dfs(1) << std::endl;
		
	return 0;
}