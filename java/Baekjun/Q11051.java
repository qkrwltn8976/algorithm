package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q11051 {
    // 이항계수 nCk = n-1Ck-1 + n-1Ck
    // 메모이제이션
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int[][] dp = new int[n+1][n+1];

        for (int i=0; i<=n; i++) {
            for (int j=0; j<=i; j++) {
                if (i == j || j == 0) {
                    // nC0 or nCn -> 1
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
                }
            }
        }

        System.out.println(dp[n][k]);
    }
}
