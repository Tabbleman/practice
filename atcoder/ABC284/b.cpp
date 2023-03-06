#include <bits/stdc++.h>

void solve(){
	int n;
	std::cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; i ++){
		int t;
		std::cin >> t;
		cnt += t & 1;

	}
	std::cout << cnt << std::endl;
	return ;
	

}

int main(int argc, char const *argv[])
{
	int tt;
	std::cin >> tt;
	while(tt --)
		solve();
	return 0;
}