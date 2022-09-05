#include<bits/stdc++.h>
using namespace std;
class newtonRaphson{
public:

    double solution(double x){
    //return x*x+5*x+6;
    return 3*x - cos(x) - 1;
    }
    double der_solution(double x){
   // return 2*x+5;
   return 3+sin(x);
    }
    double arr[2],a=0,b=1;
    void solution_Range(){
    while(1)
    {
        if(solution(a)*solution(b)<=0){
            arr[0]=a;
            arr[1]=b;
            break;
        }else if(solution(a*(-1))*solution(b*(-1))<=0){
        arr[0]=a*(-1);
        arr[1]=b*(-1);
        break;
        }
        a++;
        b++;
    }

    }

double root()
{

    solution_Range();
    double prevX=arr[0],nextX;
    while(1)
    {
        nextX=prevX-(solution(prevX)/der_solution(prevX));
        //cout<<nextX<<endl;
        if(nextX==prevX) return nextX;
        prevX=nextX;
    }

}
};
int main()
{
    newtonRaphson nr;
    cout<<nr.root()<<endl;
}
