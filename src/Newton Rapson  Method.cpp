#include<iostream>

using namespace std;





class calculate{
public:
  calculate(float x){

    float h;
 
    
    h=f(x)/g(x);


    while(abs(h)>=0.001){
      
    // printf("%.5f\n",h);

      x=x-h;
    h=f(x)/g(x);

    }

    cout<<"The root of the equation is = "<<x<<endl;
  }
public:
  float f(float x){
    return  x*x*x-2*x-5;
  }
public:
 float g(float x){
    return 3*x*x-2;
  }
};

int main(){
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 


float xa;
//cout<<"Enter first guess: ";
cin>>xa;
//cout<<"Enter second guess: ";
//cin>>xb;

calculate obj(xa);
return 0;


}

