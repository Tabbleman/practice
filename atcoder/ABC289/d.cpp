#include <bits/stdc++.h>
const int N = 100010;
void solve(){
	int n, m;
	std::cin >> n;
	int a[15], b[100010];
	memset(b, 0, sizeof b);
	for(int i = 0; i < n; i ++){
		std::cin >> a[i];
	}
	std::cin >> m;
	for(int j = 0; j < m; j ++){
		std::cin >> b[j];

	}
	int x;
	std::cin >> x;
	int ava[N] = {0}, trap[N] = {0};
	for(int i = 0; i < m; i ++){
		trap[b[i]] = 1;
	}
	ava[0] = 1;

	for(int i = 1; i <= x; i ++){
		if(trap[i])
			continue;
		for(int j = 0; j < n; j ++){
			if(a[j] <= i && ava[i - a[j]])
				ava[i] = 1;
		}
	}

	if(ava[x])std::cout << "Yes" << std::endl;
	else 
		std::cout << "No" << std::endl;


}
int main(int argc, char const *argv[])
{
	solve();
	return 0;
}