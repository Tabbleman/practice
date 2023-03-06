#include <bits/stdc++.h>
const int N = 10010;


void solve(){
	int n, m;
	std::cin >> n >> m;
	int a[N], b[N];
	for(int i = 0; i < n; i ++)
		b[i] = i + 1;
	for(int i = 0; i < m; i ++){
		std::cin >> a[i];
	}
	for(int i = 0; i < m; i ++){
		int j = a[i];
		while(a[i + 1] - a[i] == 1) 
			i ++;
		std::reverse(b + j - 1, b + a[i] + 1);
		// std::cout << j << std::endl;
	}

	for(int i = 0; i < n; i ++)
		std::cout << b[i] << ' ';
	std::cout << std::endl;


}
int main(int argc, char const *argv[])
{
	solve();
	return 0;
}