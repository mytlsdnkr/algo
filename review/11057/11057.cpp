#include <iostream>
using namespace std;

int main()
{
    int dp[1001][10];
    int N;
    cin >> N;
    long long ans=0;
    int mod = 10007;

    int i;
    for (i =0; i <= 9; i++)
    {
        dp[1][i] = 1;
    }
    int j = 0;

    for (i = 2; i <= N; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            dp[i][j] = 0;
            for (int k = 0; k <=j; k++)
            {

                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= mod;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        ans += dp[N][i];
    }
    ans%=mod;
    cout << ans<< endl;

    return 0;
}
