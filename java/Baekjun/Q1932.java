package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q1932 {
    // 아래층에 있는 수는 현재 층에서 선택된 수의 대각선 왼쪽 또는 대각선 오른쪽만 선택 가능
    // DP를 위에서부터 탐색
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       int n = Integer.parseInt(br.readLine());
       int[][] dp = new int[n][n];

       for (int i=0; i<n; i++) {
           StringTokenizer st = new StringTokenizer(br.readLine(), " ");
           for (int j=0; j<=i; j++) {
               dp[i][j] = Integer.parseInt(st.nextToken());
           }
       }

       for (int i=n-1; i>=0; i--) {
           for (int j=0; j<i; j++) {
               dp[i-1][j] += Math.max(dp[i][j], dp[i][j+1]); // 나와 내 오른쪽 칸 중 큰 값을 더해 위로 올려줌
           }
       }

       System.out.println(dp[0][0]);
   } 
}
