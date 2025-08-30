/*Bismillahir Rahmanir Raheem-In the name of Allah."
 code of MD ARIFUL ISLAM */

#include<bits/stdc++.h>
#define        int long long int
#define        INF 1e9
#define        PI 3.141592653
#define        PB push_back
#define        F first
#define        S second
#define        MP(x, y) push_back(make_pair(x, y))
#define        srt(v) sort(v.begin(), v.end())
#define        all(x) x.begin(), x.end()
#define        rsrt(v) reverse(v.begin(), v.end())
#define        no cout << "NO" << endl
#define        yes cout << "YES" << "\n"
#define        e "\n"
#define        pair  vector< pair <int ,int> >
#define        deb(args...){string _s = #args;replace(_s.begin(), _s.end(), ',', ' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it, args);}

using namespace std;


template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
	os << '{';
	for (const auto &x : v) os << " " << x; return os << '}';
}


void err(istream_iterator<string> it) {}
template <typename T, typename... Args>

void err(istream_iterator<string> it, T a, Args... args)
{
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
const int mx = 1e6 ;
int arr[mx + 1] = {0} ;
void sive()
{
	for (int i = 2 ; i * i <= mx ; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = i * i  ; j <= mx ; j += i  )
				arr[j] = 1 ;
		}
	}
}
void   solve()
{
	int n = 0 , m = 0 , k = 0 , ans = 0 , cnt  = 0 ;
	cin >> n >> m ;
	int a[n+1] ;
	sive() ;
	for (int i = 1 ; i <= n ; i++)
	{
		a[i] = i ;
		ans += i ;
	}
	int prime;
	for(int i=0;  ; i++)
	{
		if(ans<=arr[i])
		{
			prime=arr[i];
			break;
		}
	}
	if(n<=m)
	{
		if(prime!=ans) k=1;
	}
	else
	{
		
	}
	cout<<ans<<endl;
	cnt = n ;
	while (cnt <= m)
	{
		if (!arr[cnt + ans]) {
			a[n - 1] = cnt ;
			k = 1;
			break ;
		}
		else cnt++ ;
	}
	if (!k) {
		cout << "impossible\n" ; return ;
	}
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = i ; j < n ; j++)
			cout << a[j] << " ";
		for (int j = 0 ; j < i ; j++)
			cout << a[j] << " " ;
		cout << e ;
	}
}
int32_t main()
{
    ios::sync_with_stdio(0);
        cin.tie(0);
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int test_case = 1;
	// cin >> test_case ;

	while ( test_case --)
	{
		solve() ;
	}
}
//vector<int>::iterator lower, upper;
//lower = lower_bound(v.begin(), v.end(), value) - v.begin() ;
//upper = upper_bound(v.begin(), v.end(), value) - v.begin() ; -->
