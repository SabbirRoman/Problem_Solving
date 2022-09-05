/**
 *    author:  Roman_Emper0r
 *    created: 16.08.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif

int n1,n2,n3;
cin>>n1>>n2>>n3;

std::vector<int> v1,v2,v3; 
ll sum1=0,sum2=0,sum3=0;

/*for(int i=0; i<n1; i++)
{
  int tmp;
  cin>>tmp;
  v1.push_back(tmp);
  sum1+=tmp;
}

for(int i=0; i<n2; i++)
{
  int tmp;
  cin>>tmp;
  v2.push_back(tmp);
   sum2+=tmp;
}

for(int i=0; i<n3; i++)
{
  int tmp;
  cin>>tmp;
  v3.push_back(tmp);
   sum3+=tmp;
}

int i=0,j=0,k=0;
while(i!=n1&&j!=n2&&k!=n3)
{
  if(sum1==sum2 && sum2==sum3)break;
  if(sum1==max({sum1,sum2,sum3}))
  {
    sum1-=v1[i];
    i++;
  }

  if(sum2==max({sum1,sum2,sum3}))
  {
    sum2-=v2[i];
    j++;
  }
  if(sum3==max({sum1,sum2,sum3}))
  {
    sum3-=v3[i];
    k++;
  }
}*/
cout<<sum1<<endl;
}
