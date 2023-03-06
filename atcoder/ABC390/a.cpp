#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
	int n, m;
	cin >> m >> n;
	int score[110];
	int ans = 0;
	for(int i = 1; i <= m; i ++){
		cin >> score[i];
	}	for(int i = 0; i < n; i ++){
		int t;
		cin >> t;
		ans += score[t];

	}
	cout << ans << endl;
}