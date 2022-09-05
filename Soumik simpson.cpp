//simpson's 1/3

#include <bits/stdc++.h>

using namespace std;

class simpson{
    public:
        double solution(double x){
            return x*x;
        }
        double integration(int a, int b, int n){
            double dx = double(b-a)/n, x;
            double sum = 0;
            for(int i=0;i<=n;i++){
                x = a + i*dx;
                if(i==0 || i==n) sum = sum + solution(x);
                else if(i%2==0) sum = sum + (2*solution(x));
                else if(i%2==1) sum = sum + (4*solution(x));
            }
            return sum * (dx/3);
        }
};

int main(){
    simpson s;
    int a, b, n;
    cout<<"Enter a, b, n:";
    cin>>a>>b>>n;
    cout<<s.integration(a,b,n)<<endl;
}