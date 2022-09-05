#include<bits/stdc++.h>
using namespace std;
class least_square{
public:

void solve(){
int m;
cin>>m;
double x[m+5],y[m+6];
for(int i=0; i<m; i++)cin>>x[i]>>y[i];
double sum_x=0,sum_y=0,sum_xx=0,sum_xy=0;
for(int i=0; i<m; i++){
    sum_x+=x[i];
    sum_y+=y[i];
    sum_xx+=(x[i]*x[i]);
    sum_xy+=(x[i]*y[i]);
}
double a1=((m*sum_xy)-(sum_y*sum_x))/((m*sum_xx)-(sum_x*sum_x));

double a0=(sum_y-(a1*sum_x))/m;
cout<<a0<<" "<<a1<<endl;
}
};

int main()
{
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
  least_square ls;
  ls.solve();

}
