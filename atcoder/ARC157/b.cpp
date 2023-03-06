#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, K;
  std::string S;
  std::cin >> n >> K >> S;

  int nX = 0;
  for (int i = 0; i < n; i++) {
    if (S[i] == 'X')
      nX++;
  }
  // // adjust
  if (nX < K) {
    for (int i = 0; i < n; i++) {
      if (S[i] == 'X')
       	S[i] = 'Y';
      else
        S[i] == 'X';
    }
    K = n - K;
    nX = n - nX;
  }
  if (nX == (int)S.size()) {
    std::cout << std::max(0, K - 1) << std::endl;
    return;
  }
  // }

  // int ini = 0;
  // for (int i = 0; i < (int)s.size() - 1; i++) {
  //   if (s[i] == 'Y'&& s[i + 1] == 'Y')
  //     ini++;
  // }
  // int l = (1 << 30), r = -(1 << 30);
  // for (int i = 0; i < s.size(); i++) {
  //   if (s[i] == 'X')
  //     continue;
  //   l = std::min(l, i);
  //   r = std::max(r, i);
  // }
  // std::vector<int> v;
  // int cnt = 0;
  // for (int i = l + 1; i <= r - 1; i++) {
  // 	if(s[i] == 'X')cnt ++;
  // 	if(i + 1 == r || s[i + 1] == 'Y'){
  // 		if(cnt >= 1)v.push_back(cnt);
  // 		cnt = 0;

  // 	}
  // }
  // std::sort(v.begin(), v.end());
  // int ans = ini + k, remain = k;
  // std::cout << ini << std::endl;

  // for(int i = 0; i < v.size(); i ++){
  // 	if(remain >= v[i]){
  // 		remain -= v[i];
  // 		ans++;
  // 	}
  // }
  // std::cout << ans << std::endl;

  int Initial = 0;
	for (int i = 0; i < (int)S.size() - 1; i++) {
		if (S[i] == 'Y' && S[i + 1] == 'Y') Initial += 1;
	}
	int cl = (1 << 30), cr = -(1 << 30);
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'X') continue;
		cl = min(cl, i);
		cr = max(cr, i);
	}
 
	// RunLength
	vector<int> vec; int cnt = 0;
	for (int i = cl + 1; i <= cr - 1; i++) {
		if (S[i] == 'X') cnt += 1;
		if (i + 1 == cr || S[i + 1] == 'Y') {
			if (cnt >= 1) vec.push_back(cnt);
			cnt = 0;
		}
	}
	sort(vec.begin(), vec.end());
 
	// Get Score
	int Answer = Initial + K, rem = K;
	for (int i = 0; i < vec.size(); i++) {
		if (rem >= vec[i]) { rem -= vec[i]; Answer += 1; }
	}
	std::cout << Answer << std::endl;
  return;
}

int main(int argc, char const *argv[]) {
  solve();
  return 0;
}
