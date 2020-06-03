//A div 1 / C div 2: 377A - Maze 

/*Solution : Start BFS or DFS from any free cell. As the maze is connected, this search will visit all s free cells. 
But we can stop the search when it visits s - k free cells. It's obvious that 
these s - k cells are connected to each other. Remaining k cells can be transformed into the walls.*/

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

char a[550][550];
int n, m, k, s;
int ct = 0;
void dfs(int i, int j)
{
    if (ct == s - k)
    {
        return;
    }
    if (i >= n || j >= m || i < 0 || j < 0 || a[i][j] == '#' || a[i][j] == 'v')
    {
        return;
    }

    ct++;
    a[i][j] = 'v';
    if (ct == s - k)
    {
        return;
    }
    //cout << ct << endl;
    dfs(i + 1, j);
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i, j - 1);
    return;
}

void solve()
{

    s = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
            {
                s++;
            }
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (a[i][j] == '.')
            {
                dfs(i, j);
                break;
            }
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (a[i][j] == '.')
            {
                a[i][j] = 'X';
            }
        }
    }

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (a[i][j] == 'v')
            {
                cout << '.';
            }
            else
            {
                cout << a[i][j];
            }
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}