#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
vector<pair<int,int>>index;
int func(int row, int col, vector<string>& v)
{
      index.push_back(make_pair(row,col));
   
      if(v[row][col]=='?' && (row==0||col==0||row==n-1||col==m-1))
      {
         // v[row][col]='U';
         int tmp = func(row+1,col,v);
         if(tmp==0)
         {
            // v[row][col]='D';
            tmp = func(row-1,col,v);

            if(tmp==0)
         {
            // v[row][col]='L';
            tmp = func(row,col-1,v);

            if(tmp==0)
         {
            // v[row][col]='R';
            tmp = func(row,col+1,v);
         }
         }
         }
         return tmp;
      }

      char ch ;
      unordered_map<string,int> mp;
      int ans = 0;
      while(1)
      {
         if(row<0 || row==n || col<0 || col==m) 
         {
            ch = '0';
            break;
         }
         if(v[row][col]=='?')
         {
            ch = '1';
            break;
         }
         else if(v[row][col]=='U') row--;
         else if(v[row][col]=='D') row++;
         else if(v[row][col]=='L') col--;
         else if(v[row][col]=='R') col++;

         string s = to_string(row) + to_string(col);
         mp[s]++;
         if(mp[s]>1)
            {
            ch = '1';
            break;
         }
         
      }

      for(int i=0; i<index.size(); i++)
      {
         row = index[i].first;
         col = index[i].second;
         if(row<0 || row==n || col<0 || col==m) break;
         v[row][col] = ch;

      }
      index.clear();

      return 0;
}
void solve_it()
{
  
  cin>>n>>m;
  vector<string> v;

  for(int i=0; i<n; i++)
  {
   string s;
   cin>>s;
   v.push_back(s);
  }
int ans = 0;
  for(int col=0; col<m; col++)
  {
      int row = 0;
       ans += func(row,col,v);

       cout<<row<<" "<<col<<" "<<ans<<endl;
  }

  for(int col=0; col<m; col++)
  {
   int row = n-1;
      ans += func(row,col,v);
      cout<<row<<" "<<col<<" "<<ans<<endl;
  }

   for(int row=1; row<n-1; row++)
  {
   int col = 0;
   ans += func(row,col,v);
   cout<<row<<" "<<col<<" "<<ans<<endl;
  }

    for(int row=1; row<n-1; row++)
  {
   int col = m-1;
   ans += func(row,col,v);
   cout<<row<<" "<<col<<" "<<ans<<endl;
  }

  cout<<ans<<endl;
}

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

int t;
cin>>t;
while(t--)
{
   solve_it();
   
}


}