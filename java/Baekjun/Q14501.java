package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q14501 {
    // 오늘부터 N+1일째 되는 날 퇴사를 하기 위해서, 남은 N일 동안 최대한 많은 상담을 하려고 한다.
    // 상담을 완료하는데 걸리는 기간 Ti와 상담을 했을 때 받을 수 있는 금액 Pi
    // top-down
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[][] map = new int[N+1][2];
        int[] dp = new int[N+2];

        for (int i=1; i<=N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            map[i][0] = Integer.parseInt(st.nextToken());
            map[i][1] = Integer.parseInt(st.nextToken());
        }

        for (int i=N; i>0; i--) {
            int idx = i + map[i][0];
            if (idx > N+1) {
                dp[i] = dp[i+1];
            } else {
                dp[i] = Math.max(map[i][1] + dp[idx], dp[i+1]);
            }
        }

        System.out.println(dp[1]);
    }
}
