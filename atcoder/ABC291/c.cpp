#include <bits/stdc++.h>

const int N = 200010;
void solve(){
	int n;
	std::string s;
	std::cin >> n >> s;
	std::unordered_map<std::string, int> hashed;
	bool flag = false;
	int x = 0, y = 0;
	std::string tmp = std::to_string(x) + "-" + std::to_string(y);
	hashed[tmp] = true;
	for(auto& ch: s){
		if(ch == 'U')
			y ++;
		else if (ch == 'D')
			y --;
		else if (ch == 'L')
			x--;
		else if (ch == 'R')
			x++;
		std::string s = std::to_string(x) + "-" + std::to_string(y);

		if (hashed.count(s))
		{
			flag = true;
			break;
		}
		else hashed[s] = true;
	}

	if(flag)
		std::cout << "Yes" << std::endl;
	else 
		std::cout << "No" << std::endl;
	return;


}
int main(int argc, char const *argv[])
{
	solve();
	return 0;
}