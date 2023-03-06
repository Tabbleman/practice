#include <iostream>
void solve(){
	int a, b;
	std::cin >> a >> b;
	bool flag = ((a * 2) == b) || ((a * 2 + 1) == b);
	if(flag)std::cout << "Yes" << std::endl;
	else std::cout << "No" << std::endl;
	return ;
}
int main(int argc, char const *argv[])
{
	
	solve();
	return 0;
}