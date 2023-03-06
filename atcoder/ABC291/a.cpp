#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	std::string s;
	std::cin >> s;
	int i;
	for( i = 0; i < s.size(); i ++){
		if(s[i] >= 'A' && s[i] <= 'Z')break;

	}
	std::cout << i + 1 << std::endl;

	return 0;
}
