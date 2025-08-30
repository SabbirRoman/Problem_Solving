#include<bits/stdc++.h>
using namespace std;
class secant{
    public:

        double solution(double x){
            return 3*x - cos(x) - 1;
        }
double a=0,b=1;
void solution_Range(){
while(1){
    if(solution(a)*solution(b)<0)break;
    else if(solution(a*(-1))*solution(b*(-1))<0){
        a=a*(-1);
        b=b*(-1);
        break;
    }
    a++;
    b++;
}
}
    double root(){
solution_Range();
double x0=a,x1=b,x2;
while(1){
        x2=x1-(solution(x1)*((x0-x1)/(solution(x0)-solution(x1))));
    if(x2==x1) return x1;
    else{
        x0=x1;
        x1=x2;
    }
}

}


};
int main()
{
    secant sc;
    cout<<sc.root()<<endl;
}
