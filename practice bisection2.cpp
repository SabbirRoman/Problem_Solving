#include<bits/stdc++.h>
using namespace std;
class bisection1{
public:
    double solution(double x){
     return 3*x - cos(x) - 1;
    }
double a=0,b=1;
void solution_Range(){
while(1){
       // cout<<a<<" "<<b<<endl;
    if(solution(a)*solution(b)<0){

        break;
    }else if(solution(a*(-1))*solution(b*(-1))<0){
    a*=(-1);
    b*=(-1);
    break;
    }
    a++;
    b++;
}
}

double root(){
solution_Range();
double c,root1;
while(1){
     c=(a+b)/2;
    if(solution(a)*solution(c)<0)b=c;
    else a=c;
    root1=(a+b)/2;
    if(solution(c)==solution(root1)) return root1;
}

}
};
int main()
{
    bisection1 b1;
    //b1.solution_Range();
    cout<<b1.root()<<endl;
}
