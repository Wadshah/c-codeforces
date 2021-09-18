#include<bits/stdc++.h>
using namespace std;

void file_i_o(){
	  #ifndef ONLINE_JUDGE
   
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void recursion(int arr,int n){
  if(i==1) return true;
  if(arr[i]<arr[i+1]){
  	recursion(i+1,i+2);
  	cout<<"True";
  }
  if(i>n) return ;
}



int main() {
	file_i_o();
	recursion(0,100);
	int arr[4]={1,2,3,4};
  recursion(arr[4],4);
}