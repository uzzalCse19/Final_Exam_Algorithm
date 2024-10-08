
 for (int j = 0; j <= s; j++)

 {

 if (a[i - 1] <= j)

 {

 dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];

 }
