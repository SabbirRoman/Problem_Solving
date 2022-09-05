#include <bits/stdc++.h>

using namespace std;

class falsePosition{
    public:

        double arr[2];

        double solution(double x){
            return x*x*x -2*x -5;
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
            double a = arr[0], b = arr[1];
            while(1){
                double c = ((a*solution(b))-(b*solution(a)))/(solution(b)-solution(a));
                double prevRoot = c, root;
                if((solution(a)*solution(c))<=0){
                    b=c;
                }
                else{
                    a=c;
                }
                root = ((a*solution(b))-(b*solution(a)))/(solution(b)-solution(a));
                if(prevRoot==root){
                    return root;
                }
            }
        }
};

int main(){
    #ifndef ONLINE_JUDGE
 // freopen("input.txt","r", stdin);
   //freopen("output.txt","w",stdout);
#endif
    falsePosition fp;
    cout<<fp.root()<<endl;
}
