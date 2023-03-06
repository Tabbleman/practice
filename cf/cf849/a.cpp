#include <bits/stdc++.h>
char c;
void solve(){
	if(std::string("codeforces").find(c) != std::string::npos){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

}
int main(int argc, char** argv){
	int t;
	std::cin >> t;
	while(t--){
		std::cin >> c;
		solve();

	}

	return 0;
}