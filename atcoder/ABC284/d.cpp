
#include <bits/stdc++.h>

using ull = unsigned long long;

inline bool isprime(const ull& n){
	if(n < 2)return false;
	for(ull i = 2; i <= n / i; i ++){
		if(n % i == 0)
			return false;
	}
	return true;
}
std::vector<ull> prime;
void genprime(){
	for(ull t = 2; prime.size() < 100000; t++){
		if(isprime(t))
			prime.push_back(t);
	}
}
void solve(){
	genprime();
	ull n;
	std::cin >> n;
	for(ull i = 0; i < prime.size(); i ++){
		// if(n % i == 0){
		ull q = static_cast<ull>(std::sqrt(n / i));
		if(q == ((n / q) / q) && std::lower_bound(prime.begin(), prime.end(), q) != prime.end()){
			std::cout << q << ' ' << i << std::endl;
		}
		// }
	}

}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	std::cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		solve();
	}
	return 0;
}
