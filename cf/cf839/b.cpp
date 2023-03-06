#include <bits/stdc++.h>

bool ava(int mtx[2][2]){
	int cnt = 0;
	if(mtx[0][0] < mtx[0][1])cnt ++;
	if(mtx[1][0] < mtx[1][1])cnt ++;
	if(mtx[0][1] < mtx[1][1])cnt ++;
	if(mtx[0][0] < mtx[1][0])cnt ++;
	// std::cout << "cnt" << cnt << std::endl;
	return cnt == 4;

}

void solve(){
	int mtx[2][2];
	std::cin 	>> mtx[0][0] >> mtx[0][1]
						>> mtx[1][0] >> mtx[1][1];
	int cnt = 0;
	for(int i = 0; i < 4; i ++){
		if(ava(mtx)){
			printf("Yes\n");
			return;
		}
		int a00 = mtx[0][0];
		mtx[0][0] = mtx[1][0], mtx[1][0] = mtx[1][1], mtx[1][1] = mtx[0][1], mtx[0][1] = a00;
	}

	printf("No\n");

}

int main(int argc, char const *argv[])
{
	int tt;
	std::cin >> tt;
	while(tt --){
		solve();
	}
	return 0;
}