#include <bits/stdc++.h>

void solve(){
	int n, k;
	std::cin >> n >> k;
	bool fl = false, fr = false;

	for(int i = 0; i < n; i++)	{
		int l, r;
		std::cin >> l >> r;
		if(l == k){
			fl = true;
		}
		if(r == k){
			fr = true;
		}
	}
	if(fl && fr){
		std::cout << "YES\n";

	}
	else {
		std::cout << "NO\n";
	}

}

int main(int argc, char const *argv[])
{
	int t;
	std::cin >> t;
	while(t--) {
	    solve();
	}
	return 0;
}