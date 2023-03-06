#include <bits/stdc++.h>
#include <atcoder/>

const int mod = 998244353;
using pii = std::pair<int, int >;
using ll = long long;
const int N = 200010;

void solve(){
	int n;
	std::cin >> n;
	std::vector<pii> vpii(n + 1);
	ll ans = 0;
	for(int i = 1; i <= n; i ++){
		int a, b;
		std::cin >> a >> b;
		vpii[i] = std::make_pair(a, b);
		
	}
	int dp[N][2] = {0};
	dp[1][0] = 1, dp[1][1] = 1;

	for(int i = 2; i <= n; i ++){
		dp[i][0] += vpii[i].first != vpii[i - 1].first?dp[i - 1][0]: 0 + vpii[i].first != vpii[i - 1].second ?dp[i - 1][1]: 0;
		dp[i][1] += vpii[i].second != vpii[i - 1].first?dp[i - 1][0]: 0 + vpii[i].second != vpii[i - 1].second? dp[i - 1][1]: 0;
	}

	std::cout << dp[n][1] + dp[n][0] << std::endl;
}


int main(int argc, char const *argv[])
{
	solve();
	return 0;
}