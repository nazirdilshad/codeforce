/*The last contest held on Johnny's favorite competitive programming platform has been received rather positively. 
However, Johnny's rating has dropped again! He thinks that the presented tasks are lovely, but don't show the truth about competitors' skills.

The boy is now looking at the ratings of consecutive participants written in a binary system. He thinks that the more such ratings differ,
 the more unfair is that such people are next to each other. He defines the difference between two numbers as the number of bit positions, 
where one number has zero, and another has one (we suppose that numbers are padded with leading zeros to the same length). For example, 
the difference of 5=1012 and 14=11102 equals to 3, since 0101 and 1110 differ in 3 positions. Johnny defines the unfairness of the contest 
as the sum of such differences counted for neighboring participants.

Johnny has just sent you the rating sequence and wants you to find the unfairness of the competition. 
You have noticed that you've got a sequence of consecutive integers from 0 to n. That's strange, but the boy stubbornly says that everything is right. 
So help him and find the desired unfairness for received numbers. */

// summary : you have to find the bit change in consecutive numbers upto n, like if n=3, how many bits changed in 0 to 1 + 1 to 2 + 2 to 3.

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
    ll sum = 0, x = 2;
    while (n > 0)
    {
        sum += n;
        n = n / 2;
    }
    cout << sum << endl;
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