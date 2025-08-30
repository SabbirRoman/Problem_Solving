#include<bits/stdc++.h>
using namespace std;
class bisection{
public:
    double arr[2],error=.00001;
    double solution(double x){
        //return 8*exp(-x)*sin(x)-1;
        return x*x-5*x+6;
       // return -.6*x*x+2.4*x+5.5;
    //return x*x*x+4*x*x-1;
   // return 3*x - cos(x) - 1;
  // return x*x*x-2*x-5;
   //return x*log10(x)-1.2;
    }
    void solution_range(){
    double a=0,b=1;
    while(1){
        if((solution(a)*solution(b)<=0)){
            arr[0]=a; arr[1]=b;
            break;
        }else if(solution(a*(-1))*solution(b*(-1))<=0){
        arr[0]=a*(-1);
        arr[1]=b*(-1);
        break;
        }
        a++; b++;
    }

    }


    double root(){
    solution_range();
    double a=arr[0],b=arr[1];

    while(1){
        double c=(a+b)/2;
        double prev_root=c;
        if(solution(a)*solution(c)<=0)b=c;
        else a=c;
        c=(a+b)/2;
       // cout<<c<<endl;
        if(solution(c)==0 || prev_root==c || abs(solution(a)-solution(b))<=error) return c;

    }
    }

};

int main()
{
    bisection b1;
    cout<<b1.root()<<endl;
}
