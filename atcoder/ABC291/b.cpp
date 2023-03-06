#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	int n;
	std::cin >> n;
	std::vector<int> totalscores;
	for(int i = 0; i < n * 5; i ++){
		int num;
		std::cin >> num; 
		totalscores.push_back(num);

	}
	std::sort(totalscores.begin(), totalscores.end());
	double sum = 0;
	for(int i = n ; i < n * 4; i ++){
		sum += totalscores[i];
	}
	printf("%.15lf\n", sum / (n * 3));
	return 0;
}