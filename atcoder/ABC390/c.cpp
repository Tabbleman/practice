#include <bits/stdc++.h>
const int N = 300010;
int n, k;
int a[N];


int main(int argc, char const *argv[])
{
	std::cin >> n >> k;
	for(int i = 0; i < n; i ++){
		std::cin >> a[i];
	}
	std::sort(a, a+n);
	if(a[0] != 0){
		std::cout << 0 << std::endl;
		return 0;
	}
	int i = 0, j = 0;
	for(i, j; j < n ; i ++){
		if(a[j] != i){
			break;
		}
		while(a[j] == i)
			j++;

	}
	std::cout << std::min(i, k) << std::endl;
	return 0;
}