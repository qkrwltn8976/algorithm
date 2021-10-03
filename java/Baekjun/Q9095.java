package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
// dp [n] = dp [n-1] + dp [n-2] + dp [n-3]
// 5는 4+1, 3+2, 2+3
public class Q9095 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int[] dp = new int[11];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        while (T-- > 0) {
            int n = Integer.parseInt(br.readLine());

            for (int i=4; i<=n; i++) {
                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            }

            System.out.println(dp[n]);
        }
    }
}
