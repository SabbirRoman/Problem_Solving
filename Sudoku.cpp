#include<bits/stdc++.h>
#define ll long long
using namespace std;

std::vector<std::vector<int> > sudoku;
int never_again[81]={0};
void delete_except_num(int pos, int num);
void delete_the_num(int pos,int num);
void row_operation(int p,int num);
void column_operation(int p,int num);
void matrix_operation(int p, int num);
void box_opearation(int begin);
void delete_except_num(int pos, int num){

   for(int j=sudoku[pos].size()-1; j>=0; j--){
      if(sudoku[pos][j]!=num){
        sudoku[pos].erase(sudoku[pos].begin()+j);
      }
  }
  return;
}
void delete_the_num(int pos,int num){
  for(int j=0; j<sudoku[pos].size(); j++){
        if(sudoku[pos][j]==num){
          sudoku[pos].erase(sudoku[pos].begin()+j);

          return;
        }
      }
}

void row_operation(int p,int num){
 int n=p/9;
  n*=9;
  for(int i=n; i<n+9; i++){
    if(i!=p && sudoku[i].size()>1){
      delete_the_num(i,num);
   /*   if(sudoku[i].size()==1 &&never_again[i]==0)
    {
    int pos=i;
   row_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same row
    column_operation(pos,sudoku[pos][0]);//eliminate all the same numbers from same column
    matrix_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same 3x3 matrix
    never_again[pos]=1;
    }*/
    }
  }
return;
}

void column_operation(int p,int num){
  int n=p%9;
  for(int tmp=0; tmp<9; tmp++){
    int i=(tmp*9)+n;
     if(i!=p && sudoku[i].size()>1){
      delete_the_num(i,num);
    /*  if(sudoku[i].size()==1 &&never_again[i]==0)
    {
    int pos=i;
   row_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same row
    column_operation(pos,sudoku[pos][0]);//eliminate all the same numbers from same column
    matrix_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same 3x3 matrix
    never_again[pos]=1;
    }*/
    }
  }
  return;
}
void matrix_operation(int p, int num){

  int tmp=p/27;
  tmp*=27;
  int tmp2=p%9;
  tmp2=(tmp2/3)*3;
  tmp+=tmp2;
  for(int k=0; k<3; k++)
  {
    for(int i=tmp; i<tmp+3; i++)
    { 
      if(i!=p && sudoku[i].size()>1){
      for(int j=0; j<sudoku[i].size(); j++){
        if(sudoku[i][j]==num){
          sudoku[i].erase(sudoku[i].begin()+j);
          break;
        }
      }

    }
    if(i!=p && sudoku[i].size()==1 &&never_again[i]==0)
    {
    int pos=i;
   row_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same row
    column_operation(pos,sudoku[pos][0]);//eliminate all the same numbers from same column
    matrix_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same 3x3 matrix
    never_again[pos]=1;
    }
    }
    tmp+=9;
  }
  return;
}

/* box_operation*/
/*void box_opearation(int begin){

  int k=3,a[10]={0},begin2=begin;
  while(k--){
    for(int i=begin; i<begin+3; i++){
      if(sudoku[i].size()>1)for(int j=0;j<sudoku[i].size(); j++){
        a[sudoku[i][j]]++;
      }
    }
    begin+=9;
  }
  for(int k=1;k<=9;k++){
    if(a[k]==1){
     // cout<<k<<endl;
      
      int z=3;
        while(z--){

    for(int i=begin2; i<begin2+3; i++){
      if(sudoku[i].size()>1)
        for(int j=0;j<sudoku[i].size(); j++)
        {
        if(sudoku[i][j]==k){
          delete_except_num(i,k);
          row_operation(i,k);
          column_operation(i,k);
          matrix_operation(i,k);
          never_again[i]=1;
        }
        
      }
    }
    begin2+=9;
    
  }
    }
  }
  return;
}*/

int main(){
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  for(int i=0; i<81; i++){
    sudoku.push_back({1,2,3,4,5,6,7,8,9});

  }
 //cout<<"How many cells already filled:";
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
  //cout<<"Enter the row,column and the number :";
  int num,row,col;
  cin>>row>>col>>num;
  row--;
  col--;
  int pos=(row*9)+col;
  delete_except_num(pos,num);
   

 }
for(int z=0; z<5; z++){
 for (int i = 0; i < 81; ++i)
 {
  
  if(sudoku[i].size()==1 &&never_again[i]==0){
    int pos=i;
   row_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same row
    column_operation(pos,sudoku[pos][0]);//eliminate all the same numbers from same column
    matrix_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same 3x3 matrix
    never_again[pos]=1;
  }
  if(i==80) {
      int a=3,b=0;
      while(a--){
        box_opearation(b);
        box_opearation(b+3);
        box_opearation(b+6);
        b+=27;

      }
    }
 }
}

 for (int i = 0; i < 81; ++i)
 {
  if(i%9==0)cout<<endl;
  
  if(sudoku[i].size()==1) 
    cout<<sudoku[i][0]<<" ";
  else cout<<"0 ";
  //cout<<never_again[i]<<" ";
  /*cout<<"(";
  for(int j=0; j<sudoku[i].size(); j++){
  cout<<sudoku[i][j];
  
 }cout<<")   ";*/

  }
  
}

