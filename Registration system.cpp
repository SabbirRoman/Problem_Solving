#include <bits/stdc++.h>
#define ll long long 
using namespace std;



bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second < b.second);
}

int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 


	int n; 
	cin>>n; 
	vector<pair<string,int>>v;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		v.push_back(make_pair(s,i));
	}
	sort(v.begin(),v.end());
	int cnt=1;
	string s;
	for(int i=0; i<n-1; i++){
		if(cnt==1)s=v[i].first;

		if(s==v[i+1].first){
			string s1=to_string(cnt);
			string s2=s+s1;
			v[i+1].first=s2;
			cnt++;
		}else cnt=1;
	}
	
	sort(v.begin(), v.end(), sortbysec);
	for(int i=0; i<n; i++){
		s=v[i].first;
		int size=s.size();
		if(s[size-1]>=48 && s[size-1]<=57)cout<<s<<endl;
		else cout<<"OK\n";
	}

}