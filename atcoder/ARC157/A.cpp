#include <bits/stdc++.h>
int n, a, b, c, d;


void solve(){
	std::cin >> n >> a >> b >> c >> d;
	std::string s = "";
	if(std::abs(b - c) > 1 || (a != 0 && d != 0 && b == 0 && c == 0)){
		std::cout << "No\n";
		return ;
	}
	else {
		std::cout << "Yes\n";
	}
}

int main(int argc, char const *argv[])
{
	solve();

	return 0;
}
