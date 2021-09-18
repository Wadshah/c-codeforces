#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type ,greater<int>,rb_tree_tag ,tree_order_statistics_node_update> pbds;


void recursion(int a,int i )
	{
        if(a==0) return ;

       if(i<a){
        cout<<"* ";
        recursion(a,i+1);
       }
       else{
       cout<<endl;

        recursion(a-1,0);
       }}
 	

	int main()
	{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
		recursion(5,0);
	}
