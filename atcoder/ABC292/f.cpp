#include <bits/stdc++.h>

const double PI = 3.141592653589793238462643383279;

void solve(int a, int b){
	if(a > b)
	{
		solve(b, a);
		return ;
	}
	if(b - 1.0 * a * 0.5 * std::sqrt(3) / 3 > 1e-9){
		std::cout << 1.0 * 2 * std::sqrt(3) * a / 3 << std::endl;
		return;

	}
	std::cout << std::min({std::sin(PI / 3), std::sin(PI * 5 / 12 + PI / 6)}) << std::endl;
	std::cout << 1.0 * a / std::min({std::sin(PI / 3), std::sin(PI * 5 / 12 + PI / 6)}) << std::endl;
	return ;



}
int main(int argc, char** argv){
	int a, b;
	std::cin >> a >> b;
	solve(a, b);

	return 0;
}