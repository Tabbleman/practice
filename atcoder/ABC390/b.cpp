#include <bits/stdc++.h>
int main(int argc, char** argv){
	int n, k;
	std::string s;
	std::cin >> n >> k;
	std::cin >> s;
	for(int i = 0; i < n; i ++)	{
		
		if(k == 0 && s[i] == 'o')
			s[i] = 'x';
		if(s[i] == 'o')
			k--;
	}
	std::cout << s << std::endl;
	return 0;

}