#include <bits/stdc++.h>

void solve(){
	int n;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int x = 0, y = 0;
	for(auto &c :s){
		if(c == 'U'){
			y++;
		}
		else if(c == 'D'){
			y --;
		}
		else if(c == 'L'){
			x--;
		}
		else {
			x++;
		}
		if(x == 1 && y == 1){
			std::cout << "YES\n";
			return ;

		}

	}
	std::cout << "NO\n";

	return ;

}

int main(int argc, char** argv){
	int tt;
	std::cin >> tt;
	while(tt -- ){
		solve();

	}

	return 0;
}