    /**
     *    author:  Roman_Emper0r
     *    created: 16.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



    void solve(){
      string s;
      cin>>s;
      int parenthesis=0,letters[26],tmp=-1;
      for(int i=0 ;i<26; i++)letters[i]=-2;

        vector<int>v;
        v.push_back(-1);
      for(int i=0; i<s.size(); i++)
      {
        
        if(s[i]=='(')
            {
                parenthesis++;
                tmp=i;
                v.push_back(i);

            }
        else if(s[i]==')') 
            {
                parenthesis--;
                if(v.size()>0)
                {
                    for(int j=0; j<26; j++)if(letters[j]==tmp)letters[j]=-2;
                    v.pop_back();
                    tmp=v[v.size()-1];
                }
                else
                {
                    parenthesis=-1;
                    break;
                }
            }
        else
        {
            if(letters[s[i]-'a']!=-2 )
            {
                parenthesis=-1;
                break;
            }
            else
            {
                letters[s[i]-'a']=tmp;
            }

        }
        if(parenthesis<0) break;
      }
    
     if(parenthesis==0) cout<<"Yes\n";
     else cout<<"No\n";



              

    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
          // cin>>t ;
           
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


