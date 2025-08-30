#include<bits/stdc++.h>
using namespace std;
int bst[100]={0};

void insertion_in_bst(int value, int root, int root_loc){
   if(root==0){
      root =value;
      bst[root_loc]=value;
      return;
   }
    
   if(value<root){
      root_loc=(2*root_loc)+1;
      insertion_in_bst(value,bst[root_loc],root_loc);
      return;
   }
   else{
      root_loc=(2*root_loc)+2;
      insertion_in_bst(value,bst[root_loc],root_loc);
      return;
   }
}

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
int n;
cin>>n;

for(int i=0; i<n; i++){
   int tmp;
   int root_loc=0;
   cin>>tmp;
   insertion_in_bst(tmp,bst[root_loc],root_loc);

}
int p;
cin>>p;
int a[p];
// print location  
//cout<<"\n Date : ";
for(int i=0; i<p; i++){
   
   cin>>a[i];
   //cout<<a[i]<<" ";
   }
   cout<<"\nIndex  Data "<<endl;
   for(int i=0; i<p; i++){
   for(int j=0; j<100; j++)if(bst[j]==a[i])cout<<j<<"      "<<a[i]<<endl;;
      
}

   return 0;

}