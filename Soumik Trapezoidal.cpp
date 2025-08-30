#include <bits/stdc++.h>

using namespace std;

class Trapezoidal{
    public:
        double solution(double x){
            return x*x;
        }

        double integration(int n, int a, int b){
            double dx = double(b-a)/n;
            double x, sum=0;
            for(int i=0;i<=n;i++){
                x = a + i*dx;
                if(i==0 || i==n) sum = sum + solution(x);
                else sum = sum + 2 * solution(x);
            }
            return (dx/2)*sum;
        }
};

int main(){
    Trapezoidal t;
    int a, b, n;
    cout<<"Enter a, b, n:";
    cin>>a>>b>>n;
    cout<<t.integration(n,a,b)<<endl;

}