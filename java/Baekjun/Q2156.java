package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q2156 {
    // 마신 후에는 원래 위치에 다시 놓아야 한다
    // 연속으로 놓여 있는 3잔을 모두 마실 수는 없다
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n+1];
        int[] dp = new int[n+1];

        for (int i=1; i<=n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        dp[1] = arr[1];
        if (n>=2) // 이 부분이 존재하지 않으면 N이 1이 입력될 때 런타임 에러가 발생
            dp[2] = arr[1] + arr[2];
        if (n>=3)
            for (int i=3; i<=n; i++) {
                // 연속 0번 1번 2번
                dp[i] += Math.max(dp[i-1], Math.max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i]));
            }

        System.out.println(dp[n]);
    } 
}
