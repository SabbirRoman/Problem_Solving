#include <bits/stdc++.h>

using namespace std;

class secant{
    public:
        double arr[2];

        double solution(double x){
            return 3*x - cos(x) - 1;
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

            solution_Range();
            double prev2X = arr[0];
            double prevX = arr[1];
            double nextX;

            while(1){
                nextX = prevX - ((prevX - prev2X)/(solution(prevX)-solution(prev2X)))*solution(prevX);
                if(prevX == nextX){
                    return nextX;
                }
                else{
                    prev2X = prevX;
                    prevX = nextX;
                }
            }
        }
};

int main(){
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    secant s;
    cout<<s.root()<<endl;
}