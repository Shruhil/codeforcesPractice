#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vvpii vector<vector<pair<int,int>>>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define tiii tuple<int,int,int>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* UTILS */
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
const ll inf = 1e18;

// mathematical functions
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
bool isValid(int r, int c, int n, int m) {return r>=0 && r<n  && c>=0 && c<m;}

// directional movements
string dir = "LURD";
int dr[4] = {0, -1, 0, 1};
int dc[4] = {-1, 0, 1, 0};
int fx[]={-2, -2, -1, -1,  1,  1,  2,  2}; // knight movements
int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // knight movements

// typedefs
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

// some special functions
ll bin_exp(int a, int b) {if(b == 0) return 1ll; ll ans = bin_exp(a, b/2); if(b & 1) {return a*ans*ans;} else return ans*ans;}

void coderAnsh() {
    int a, b;
    cin >> a >> b;

	int minOp = a + 3;

    f(inc, 0, 31) {
		if(b + inc == 1) continue;

		int A = a;
		int B = b + inc;
		
		int op = inc;
		while(A) {
			A/=B;
			op+=1;
		}

		minOp = min(minOp, op);
	}

	cout << minOp;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--) {
		coderAnsh();
		cout << '\n';
	}

	return 0;
}
