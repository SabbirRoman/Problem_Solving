    /**
     *    author:  Roman_Emper0r
     *    created: 11.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first

    bool fun(string s1, string s2, int cnt)
    {
        int index=s1.size();
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='B')
            {
                s1[i]='W';
                cnt--;
                index=i;
                break;
            }
        }
        int flag=0;
        for(int i=index; i<s1.size(); i++)
        {
            //cout<<i<<" "<<flag<<" "<<cnt<<endl;
            if(flag)
            {
                 if(s1[i]=='B'){
                    flag=0;
                    s1[i]='W';
                    cnt--;
                    i--;
                }
                else if(s2[i+1]=='B')
                {
                    //i++;
                    s2[i+1]='W';
                    cnt--;
                }
                else break;
            }
            else
            {
                if(s2[i]=='B'){
                    flag=1;
                    s2[i]='W';
                    cnt--;
                    i--;
                }
                else if(s1[i+1]=='B')
                {
                    //i++;
                    s1[i+1]='W';
                    cnt--;
                }
                else break;
            }

        }
        if(cnt==0) return true;

        return false;
    }


    void solve(){
        ll n,cnt=0; cin>>n;
        string s1,s2,s3,s4;
        cin>>s1>>s2;
       for(int i=n-1; i>=0; i--)
       {
        s3+=s1[i];
        s4+=s2[i];
        if(s1[i]=='B')cnt++;
        if(s2[i]=='B') cnt++;
       }
       bool ans=false;
       if(fun(s1,s2,cnt)) ans=true;
       if(fun(s2,s1,cnt)) ans=true;
       if(fun(s3,s4,cnt)) ans=true;
       if(fun(s4,s3,cnt)) ans=true;

       if(ans)cout<<"YES\n";
       else cout<<"NO\n";

    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           
           while(t--){
               solve() ;
           }
           return 0 ;

    }


