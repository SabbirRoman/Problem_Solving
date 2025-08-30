#include<bits/stdc++.h>
using namespace std;
class trapezoidal_rule{
public:
    double solution(double x){
        return 1/x;
    }
    void solve(){
        double a,b,n,ans=0.0;
        cin>>a>>b>>n;
        double del_x=(b-a)/n;
        for(int i=0; i<=n; i++)
        {
            double tmp=a+(i*del_x);
           if(i!=0) tmp=solution(tmp);
           else tmp=a;
            if(i!=0 && i!=n) tmp*=2;
            ans+=tmp;
        }
        ans*=del_x;
        ans/=2;
        cout<<"The answer is : "<<ans<<endl;


    }
};
int main()
{
    trapezoidal_rule tr;
    tr.solve();

}
