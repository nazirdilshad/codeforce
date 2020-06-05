/*Johnny has recently found an ancient, broken computer. The machine has only one register, which allows one to put in there one variable. Then in one operation, you can shift its bits left or right by at most three positions. The right shift is forbidden if it cuts off some ones. So, in fact, in one operation, you can multiply or divide your number by 2, 4 or 8, and division is only allowed if the number is divisible by the chosen divisor.

Formally, if the register contains a positive integer x, in one operation it can be replaced by one of the following:

x⋅2
x⋅4
x⋅8
x/2, if x is divisible by 2
x/4, if x is divisible by 4
x/8, if x is divisible by 8
For example, if x=6, in one operation it can be replaced by 12, 24, 48 or 3. Value 6 isn't divisible by 4 or 8, so there're only four variants of replacement.

Now Johnny wonders how many operations he needs to perform if he puts a in the register and wants to get b at the end.
*/

code:

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
    ll a, b, c = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        if (a < b)
        {
            swap(a, b);
        }
        if (a % b != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll x = a / b;
            while (x > 1)
            {
                if (x % 8 == 0)
                {
                    x /= 8;
                    c++;
                }
                else if (x % 4 == 0)
                {
                    x /= 4;
                    c++;
                }
                else if (x % 2 == 0)
                {
                    x /= 2;
                    c++;
                }
                else
                {
                    break;
                }
            }
            if (x == 1)
            {
                cout << c << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
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