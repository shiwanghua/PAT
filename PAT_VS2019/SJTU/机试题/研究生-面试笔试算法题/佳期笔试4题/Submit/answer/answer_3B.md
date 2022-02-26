# answer_3B

- This problem can be solved by dynamic programming.
- Assume that $dp[k][i][j]$ means after k seconds, there are $dp[k][i][j]$  ways the robot is in (i,j) position.
- For processing the position (i,j) where i or j is negative, we can set the initial position to (20,20) and the size of $dp$ array to 21x41x41
- $dp$ array is initialed to 0 except dp[0][20][20]=1
- The general formula of $dp$ is:

$$
dp[k][i][j] = dp[k-1][i-1][j-1]+dp[k-1][i-1][j]+dp[k-1][i-1][j+1]+\\dp[k-1][i][j-1]+dp[k-1][i][j+1]+\\dp[k-1][i+1][j-1]+dp[k-1][i+1][j]+dp[k-1][i+1][j+1] \\k\ge1 \&\&0\le i,j \le40
$$

- Finally, the expectation distance is:

$$
\large E_d=\frac{ \sum_{i,j}dp[n][i][j]*\sqrt {(i-20)^2+(j-20)^2}  }{sum\quad of\quad {dp[n]}}
$$