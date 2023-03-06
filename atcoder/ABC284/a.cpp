#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	std::vector<std::string> v;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i ++){
		std::string s;
		std::cin >> s;
		v.push_back(s);
	}
	reverse(v.begin(), v.end());
	for(auto& s: v){
		std::cout << s << std::endl;

	}
	
	return 0;
}