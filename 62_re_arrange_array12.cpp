#include<bits/stdc++.h>
using namespace std;
void solution(long long a[], int n)
{
	long long ans = a[0];
	for(int i = 0; i < n-1; i++)
	{
		long long s = a[i];
		ans = max(ans, a[i]);
		for(int j = i+1; j < n; j++)
		{
			s*=a[j];
			ans = max(ans, s);
		}
	}
	cout<<ans<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

