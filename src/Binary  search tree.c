#include<bits/stdc++.h>
using namespace std;
int bst[100]={-1};
int root_loc=0;
void insertion_in_bst(int value, int root){
   if(root==-1){
      root =value;
      bst[root_loc]=value;
      return;
   }

   if(value<root){
      root_loc=(2*root_loc)+1;
      insertion_in_bst(value,bst[root_loc]);
   }
   else{
      root_loc=(2*root_loc)+2;
      insertion_in_bst(value,bst[root_loc]);
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
   cin>>tmp;
   insertion_in_bst(tmp,bst[root_loc]);

}

for(int i=0; i<10; i++){
   cout<<i<<" "<<bst[i]<<endl;
}
   return 0;

}
