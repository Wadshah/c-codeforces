#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 

 int n;
 cin>>n;
 vector<int> arr(n,0);

int q;
cin>>q;

while(q--)
{
	int l,r;
	cin>>l>>r;

	arr[l]++;
	if(r+1<n)
	{
		arr[r+1]--;
	}
}

for(int i=1;i<n;i++)
{
	arr[i]+=arr[i-1];
}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;

}