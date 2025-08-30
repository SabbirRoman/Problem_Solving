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
void basic_operations(int pos , int num);
int search_element(int pos, int num);


void delete_the_num(int pos,int num){
  for(int j=0; j<sudoku[pos].size(); j++){
        if(sudoku[pos][j]==num){
          sudoku[pos].erase(sudoku[pos].begin()+j);
        if(sudoku[pos].size()==1 &&never_again[pos]==0)
        {
        basic_operations(pos,sudoku[pos][0]);
        }
          return;
        }
      }
}
void basic_operations(int pos, int num)
{
	row_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same row
    column_operation(pos,sudoku[pos][0]);//eliminate all the same numbers from same column
    matrix_operation(pos,sudoku[pos][0]); //eliminate all the same numbers from same 3x3 matrix
    never_again[pos]=1;
    return;
}
void row_operation(int p,int num){
 int n=p/9;
  n*=9;
  for(int i=n; i<n+9; i++){
    if(i!=p && sudoku[i].size()>1){
      delete_the_num(i,num);
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
     delete_the_num(i,num);

    }
  
    }
    tmp+=9;
  }
  return;
}
void delete_except_num(int pos, int num){
   
   for(int j=sudoku[pos].size()-1; j>=0; j--){
      if(sudoku[pos][j]!=num){
        sudoku[pos].erase(sudoku[pos].begin()+j);
      }
  }
  basic_operations(pos,num);
  return;
}

/* box_operation*/
void box_opearation(int begin){

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
           if( sudoku[i].size()==1 &&never_again[i]==0)
    {
    	basic_operations(i,sudoku[i][0]);
    }
        }
        
      }
    }
    begin2+=9;
    
  }
    }
  }
  return;
}

int search_element(int pos, int num)
{
  for(int i=0; i<sudoku[pos].size(); i++)
  {
    if(sudoku[pos][i]==num) return 1;
  }
  return 0;
}
int main(){
   #ifndef ONLINE_JUDGE
   freopen("Hard sudoku.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
 for(int i=0; i<81; i++){
    sudoku.push_back({1,2,3,4,5,6,7,8,9});

  }

 //cout<<"How many cells already filled:";
 
 for(int i=0; i<81; i++){
  //cout<<"Enter the row,column and the number :";
  int num;
  cin>>num;
 // cout<<i<<" "<<num<<endl;
  if(num!=0) delete_except_num(i,num);
  
 }
 /*for(int k=0; k<4; k++){
int a=3,b=0;
      while(a--){
        box_opearation(b);
        box_opearation(b+3);
        box_opearation(b+6);
        b+=27;

      }
      for(int i=51; i<54; i++){
        if(sudoku[i].size()>1) 
        for(int j=0; j<sudoku[i].size();j++)
        {
          int num=sudoku[i][j];
          int pos1=(i/3)*3;
          int pos=(i/27)*27+(i%9);
          
          pos=(pos/3)*3;
         // cout<<pos<<endl;
          bool z=true;
          for(int a=0; a<3; a++)
          {
            if((pos/3)*3 != pos1){
             if( search_element(pos,num) || search_element(pos+1,num) || search_element(pos+2,num))
             {
              z=false;
              break;
             }
            }

            pos+=9;
          }
          if(z)
          {

           /// Delete the elememts from other column of the same row
            pos=(i/9)*9;
            for(int k=pos; k<pos+9; k++){
              if((k/3)*3 !=pos1){
                delete_the_num(k,num);
              }
            }
          }

        }
      }
      
  }*/
int sum=0;
for (int i = 0; i < 81; ++i)
 {
  
  if(i%9==0)cout<<endl;
  if(i%27==0)cout<<endl;

  sum+=sudoku[i].size();
  /*if(sudoku[i].size()==1) 
    cout<<sudoku[i][0]<<" ";
  else cout<<"0 ";*/
  //cout<<never_again[i]<<" ";
   if(i%3==0)cout<<"  ";
 cout<<"(";
  for(int j=0; j<sudoku[i].size(); j++){
   
  cout<<sudoku[i][j];
  
 }
 //for(int k=sudoku[i].size();k<10;k++)cout<<" ";
 cout<<")";

  }
  //cout<<sum<<endl;
 
}