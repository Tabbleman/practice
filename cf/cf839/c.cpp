#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N=50;
int a[N];
int n,k;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>k>>n;
		memset(a,0,sizeof a);
		int cnt=1;
		a[0]=1;
		for(int i=0;i<k-1;i++){
			if(a[i]+cnt>n){
				if(a[i]+1>n){
					a[i]--;
					int p=i;
					while(p>=1&&a[p]==a[p-1]){
						a[p-1]--;
						p--;	
					}
				}
				a[i+1]=a[i]+1;
 
			}
			else{
				a[i+1]=a[i]+cnt;
			}
			cnt++;
		}
		for(int i=0;i<k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}