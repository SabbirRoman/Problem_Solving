
#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll sum=0;
void area(vector< pair <int,int> > vect, vector< pair <int,int> > vect2, int k){
ll tmp=0;
int p=vect.size();
for(int i=0; i<k; i++){
	tmp=abs((vect[0].first*vect[p-1].second)-(vect[0].first*vect2[i].second)+(vect[p-1].first*vect2[i].second)-(vect[p-1].first*vect[0].second)+(vect2[i].first*vect[0].second)-(vect2[i].first*vect[p-1].second));
	//cout<<tmp<<endl;
	sum=max(sum,tmp);
}
return;
}

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  int t;
  cin>>t;
  while(t--){
  	sum=0;
  	int w,h;
  	cin>>w>>h;
  	std::vector<pair<int,int>> v1,v2,v3,v4;
  	int k1,k2,k3,k4;
  	cin>>k1;
  	for(int i=0; i<k1; i++){
  		int tmp;
  		cin>>tmp;
  		v1.push_back(make_pair(tmp,0));
  	}
  	cin>>k2;
  	for(int i=0; i<k2; i++){
  		int tmp;
  		cin>>tmp;
  		v2.push_back(make_pair(tmp,h));
  	}
  	cin>>k3;
  	for(int i=0; i<k3; i++){
  		int tmp;
  		cin>>tmp;
  		v3.push_back(make_pair(0,tmp));
  	}
  	cin>>k4;
  	for(int i=0; i<k4; i++){
  		int tmp;
  		cin>>tmp;
  		v4.push_back(make_pair(w,tmp));
  	}
  	area(v1,v2,k2);
  	area(v1,v3,k3);
  	area(v1,v4,k4);

  	area(v2,v1,k1);
  	area(v2,v3,k3);
  	area(v2,v4,k4);

  	area(v3,v1,k1);
  	area(v3,v2,k2);
  	area(v3,v4,k4);

  	area(v4,v1,k1);
  	area(v4,v2,k2);
  	area(v4,v3,k3);

  	cout<<sum<<endl;
  }
  
}

