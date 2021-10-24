package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q16194 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine()); // 민규가 구매하려고 하는 카드의 개수
        int[] arr = new int[N+1]; // 카드가 i개 포함된 카드팩의 가격은 Pi원
        int[] dp = new int[N+1];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i=1; i<=N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            dp[i] = N * arr[1];
        }

        for (int i=1; i<=N; i++) {
            for (int j=1; j<=i; j++) {
                dp[i] = Math.min(arr[j] + dp[i-j], dp[i]);
            }
        }
        
        System.out.println(dp[N]);

    }
}
