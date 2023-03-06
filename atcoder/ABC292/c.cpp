#include <bits/stdc++.h>
using ull = unsigned long long;
const int N = 200050;
void solve(){
	int n;
	std::cin >> n;
	ull ab[N];
	memset(ab, 0, sizeof ab);

	ull ans = 0;
	for(int i = 1; i <= N ; i ++){
		for(int j = 1; j <= N / i; j ++){
			ab[i * j] ++; 
		}
	}
	std::cout << std::endl;
	for(int i = 1; i < n; i ++){
		ans += ab[i] * ab[n - i]; 
	}
	std::cout << ans << std::endl;
}
int main(int argc, char** argv){
	solve();
	return 0;
}