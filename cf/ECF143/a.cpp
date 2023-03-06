#include <bits/stdc++.h>

int n, m, t;
void solve(){
	std::cin >> n >> m;
	std::string a, b;
	std::cin >> a >> b;

	std::reverse(b.begin(),b.end());
	a += b;
	int cnt = 0;
	for(int i = 0; i < a.size() - 1; i ++){
		if(a[i] == a[i + 1]){
			cnt++;
		}
	}
	if(cnt <= 1)
		std::cout << "YES\n" ;
	else 
		std::cout << "NO\n";

}

int main(int argc, char const *argv[])
{

	std::cin >> t;
	while(t--) {	
	    solve();
	}
	return 0;
}
