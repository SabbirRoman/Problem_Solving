#include<bits/stdc++.h>
using namespace std;

int main(){
  /* #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif */
    cout<<"\nHow many nodes : ";
    int n;
    cin>>n;
    int adjacency_matrix[n+1][n+1]={0};
    cout<<"\nHow many edges : ";
    int e;
    cin>>e;
    for(int i=0; i<e; i++){
      int v1,v2;
      cout<<"\nType v1 and v2 : ";
      cin>>v1>>v2;
      adjacency_matrix[v1][v2]=1;
      adjacency_matrix[v2][v1]=1;
    }
    cout<<endl;
    cout<<"Here is A1 :"<<endl;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++)cout<<adjacency_matrix[i][j]<<" ";
      cout<<endl;
    }

    for(int i=1; i<=n; i++){
      cout<<"\nAdjacent of v"<<i<<" :";
      for(int j=1;j<=n; j++)if(adjacency_matrix[i][j]==1)cout<<" v"<<j;
    }
    int adjacency_matrix2[n+1][n+1];
    for(int i=1; i<=n; i++){

      for(int j=1; j<=n; j++){
         int sum=0;
         for(int k=1; k<=n; k++){
            sum+=(adjacency_matrix[i][k]*adjacency_matrix[k][j]);
         }
         adjacency_matrix2[i][j]=sum;

      }   }
       cout<<endl;
       cout<<"Here is A2 :"<<endl;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++)cout<<adjacency_matrix2[i][j]<<" ";
      cout<<endl;
    }
    int adjacency_matrix3[n+1][n+1];
    for(int i=1; i<=n; i++){

      for(int j=1; j<=n; j++){
         int sum=0;
         for(int k=1; k<=n; k++){
            sum+=(adjacency_matrix2[i][k]*adjacency_matrix[k][j]);
         }
         adjacency_matrix3[i][j]=sum;

      }   }
       cout<<endl;
       cout<<"Here is A3 :"<<endl;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++)cout<<adjacency_matrix3[i][j]<<" ";
      cout<<endl;
    }

    int adjacency_matrix4[n+1][n+1];
    for(int i=1; i<=n; i++){

      for(int j=1; j<=n; j++){
         int sum=0;
         for(int k=1; k<=n; k++){
            sum+=(adjacency_matrix3[i][k]*adjacency_matrix[k][j]);
         }
         adjacency_matrix4[i][j]=sum;

      }   }
       cout<<endl;
       cout<<"Here is A4 :"<<endl;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++)cout<<adjacency_matrix4[i][j]<<" ";
      cout<<endl;
    }
    int Br[n+1][n+1],ans=1;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        Br[i][j]=adjacency_matrix[i][j]+adjacency_matrix2[i][j]+adjacency_matrix3[i][j]+adjacency_matrix4[i][j];
        if(Br==0)ans=0;
      }
    }
    if(ans)cout<<"THe graph is strongly connected\n";
    else cout<<"THe graph is not strongly connected\n";
    cout<<"Here is Br :"<<endl;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++)cout<<Br[i][j]<<" ";
      cout<<endl;
    }

}
