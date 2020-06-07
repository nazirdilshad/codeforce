/*Among Johnny's numerous hobbies, there are two seemingly harmless ones: applying bitwise operations and sneaking into his dad's office. 
As it is usually the case with small children, Johnny is unaware that combining these two activities can get him in a lot of trouble.

There is a set S containing very important numbers on his dad's desk. The minute Johnny heard about it, he decided that it's a 
good idea to choose a positive integer k and replace each element s of the set S with s⊕k (⊕ denotes the exclusive or operation).

Help him choose such k that Johnny's dad will not see any difference after his son is done playing (i.e. Johnny will get the same set as before playing). 
It is possible that no such number exists. It is also possible that there are many of them. In such a case, output the smallest one. Note that the order of elements in a set doesn't matter, i.e. set {1,2,3} equals to set {2,1,3}.

Formally, find the smallest positive integer k such that {s⊕k|s∈S}=S or report that there is no such number.

For example, if S={1,3,4} and k=2, new set will be equal to {3,1,6}. If S={0,1,2,3} and k=1, after playing set will stay the same. */

// logic : we  could check for all the no from 1 to 1024 and compare it with actual set.(but we need to sort both the vector).

//code:

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p64;
typedef vector<ll> v420;

#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define maxi 100000
#define pii pair<int, int>
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x))
#define DANGER                        \
    std::ios::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 1; i <= 1024; i++)
    {
        vector<ll> v1;
        for (int j = 0; j < v.size(); j++)
        {
            v1.pb(v[j] ^ i);
        }
        sort(v1.begin(), v1.end());
        if (v1 == v)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}