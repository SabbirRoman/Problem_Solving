#include<bits/stdc++.h>
using namespace std;
class LGinterpolation{
public:
    void solve(){
    int n;
    cin>>n;
    double x[n],y[n];
    for(int i=0; i<n; i++)cin>>x[i]>>y[i];
    double tmp,sum=0;
    cin>>tmp;
    for(int i=0; i<n; i++){
            double p=1,q=1;
        for(int j=0; j<n; j++){
            if(i!=j){
                p*=(tmp-x[j]);
                q*=(x[i]-x[j]);
            }
        }
    sum+=(p/q)*y[i];
    }
    cout<<sum<<endl;
    }
};
int main()
{
    LGinterpolation lg;
    lg.solve();
}
