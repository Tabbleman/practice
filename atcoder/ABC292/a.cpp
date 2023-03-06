#include <bits/stdc++.h>

void solve(){
	std::string s;
	std::cin >> s;
	for(auto& ch: s){
		if(ch >= 'a' && ch <= 'z')
			ch = ch + 'A' - 'a';
	}
	std::cout << s << std::endl;

}
int main(int argc, char** argv){
	solve();
	return 0;
}