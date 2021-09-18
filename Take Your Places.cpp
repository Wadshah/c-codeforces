#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define ll     long long int 
#define inf     1e18
#define mod    1000000007

const int N=1e5+5;

void file_i_o(){

ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    #ifndef ONLINE_JUDGE
freopen("inputf.in", "r", stdin);
freopen("output.in", "w", stdout);
#endif
}

int main(int argc ,char const *argv[]){
 clock_t begin =clock();  
 file_i_o();

int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 int arr[n],arr2[n];
	for(int i=0;i<n;i++){
			cin>>arr[i];
			arr2[i]=arr[i];
		}
		for (int i = 0; i < n; i++){
		cout << arr2[i] << " ";}
		cout<<endl;


    vector<int> v1; 
	vector<int> v2; 

	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0)
			v1.push_back(arr[i]);
		else
			v2.push_back(arr[i]);

	int index = 0, i = 0, j = 0;

	bool flag = false;
	if (arr[0] % 2 == 0)
		flag = true;
	while (index < n) {
		if (flag == true) {
			arr[index++] = v1[i++];
			flag = !flag;
		}
		else {
			arr[index++] = v2[j++];
			flag = !flag;
		}
	}
	for (i = 0; i < n; i++){
		cout << arr[i] << " ";
	}cout<<endl;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr2[i]){
			count++;
		}
	}
	cout<<count;
}

#ifndef ONLINE_JUDGE
clock_t end   =clock();
cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
#endif
return 0;

}

