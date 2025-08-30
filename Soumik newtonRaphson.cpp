#include <bits/stdc++.h>

using namespace std;

class newtonRaphson{
    public:

        double arr[2];

        double solution(double x){
            return 3*x - cos(x) - 1;
        }

        double derSolution(double x){
            return 3 + sin(x);
        }

        void solution_Range(){
            double a=0, b=1;
            while(1){
                if((solution(a)*solution(b))<0){
                    arr[0] = a;
                    arr[1] = b;
                    break;
                }
                else{
                    if((solution(a*(-1))*solution(b*(-1)))<0){
                       arr[0] = a*(-1);
                       arr[1] = b*(-1);
                       break;
                    }
                    a++;
                    b++;
                }
            }
        }

        double root(){

            double prevX = arr[0], nextX;
            while(1){
                nextX = prevX - (solution(prevX)/derSolution(prevX));

                if(prevX == nextX) return nextX;
                prevX = nextX;
            }
        }

};

int main(){
    newtonRaphson nr;
    cout<<nr.root()<<endl;
}
