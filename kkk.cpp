#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printxy(int x, int y){

    int *ptr;
    cout<<x<<" "<<y<<endl;
    x=0;
    ptr=&x;
    cout<<x<<" "<<y<<endl;
    y=*ptr;
    cout<<x<<" "<<y<<endl;
    *ptr=1; 
    cout<<x<<" "<<y<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 


int x,y;
cin>>x>>y;
//printxy(x,y);
char c[]="GATE2011";
char *p=c;
cout<<p<<endl;
printf("%s",p+p[3]-p[1]);

}