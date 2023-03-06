#include <bits/stdc++.h>
const int N = 110;
void solve(){
	int out[110];
	memset(out, 0, sizeof(out));
	int n, q;
	std::cin >> n >> q;
	for(int i = 0; i < q; i ++){
		int a, x;
		std::cin >> a >> x;
		switch(a){
			case 1:
				out[x] ++;
				break;
			case 2:
				out[x] += 2;
				break;
			case 3:
				if(out[x] >= 2)
					std::cout << "Yes" << std::endl;
				else
					std::cout << "No" << std::endl;
				break;
			default:
				break;
		}

	}

}
int main(int argc, char** argv){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
