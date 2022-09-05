#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
 	int n;
 	cin>>n;
 	priority_queue<int>p;
 	priority_queue<int,vector<int>, greater<int>>p2;

 	for(int i=1; i<=n; i++)
 	{
 		p.push(i);
 		p2.push(i);
 	}
 	while(p.empty()==0){
 		cout<<p.top()<<" ";
 		p.pop();
 	}
 	cout<<endl;
 	while(p2.empty()==0){
 		cout<<p2.top()<<" ";
 		p2.pop();
 	}
 	cout<<endl;
 	
 }