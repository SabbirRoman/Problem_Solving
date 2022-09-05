#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define f(x) x*x*x-2*x-5

class calculate{
public:
  calculate(float xa, float xb){
    int i=1; 
    float x1,f1,fa,fb,e;
    while(1){
      fa=f(xa);
      fb=f(xb);
      if(fa*fb>0){
        cout<<"Guess is wrong\n";
        exit(0);
      }else{
        x1=(xa+xb)/2;
        f1=f(x1);
        
        if(fa*f1<0){
          xb=x1;
        }else xa=x1;
        i++;
      }
      //cout<<f(x1)<<endl;
      if(abs(f(x1))<0.00001)break;

    }
    
    cout<<"The root of the equation is = "<<x1<<endl;
    cout<<f(x1)<<endl;
  }
};

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
int i; 
float xa,xb,f0,fa,fb;
//cout<<"Enter first guess: ";
cin>>xa;
//cout<<"Enter second guess: ";
cin>>xb;
calculate obj(xa,xb);
return 0;

  
}

