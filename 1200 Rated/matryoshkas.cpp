#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

void coderAnsh() {
	int n;
    cin >> n;

    set<int> s;
    map<int,int> freq;

    f(i, 0, n) {
        int x;
        cin >> x;

        freq[x]+=1;
        s.insert(x);
        s.insert(x + 1);
    }

    int last = 0;
    int dollSets = 0;
    for(int c : s) {
        int cnt = freq[c];
        dollSets+=(max(0, cnt - last));
        last = cnt;
    }

    cout << dollSets;
    return;
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