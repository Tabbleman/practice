#include <bits/stdc++.h>

void solve(){
	std::string s;
	std::cin >> s;
	for(auto& ch:s){
		if(ch == '0')
			ch = '1';
		else 
			ch = '0';

	}
	std::cout << s << std::endl;

}
int main(int argc, char const *argv[])
{
	solve();
	return 0;
}