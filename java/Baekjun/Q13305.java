package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q13305 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine()); // 도시의 개수
        StringTokenizer st = new StringTokenizer(br.readLine(), " "); // 두 도시를 연결하는 도로의 길이
        long[] dist = new long[n-1];
        long[] cost = new long[n];

        for (int i=0; i<n-1; i++) {
            dist[i] = Long.parseLong(st.nextToken());
        }

        st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<n; i++) {
            cost[i] = Long.parseLong(st.nextToken());
        }

        long minCost = cost[0];
        long sum = 0;
        for (int i=0; i<n-1; i++) {
            // 새로 간 곳의 리터당 가격이 더 싸다면 최소 비용을 갱신
            if (cost[i] < minCost) minCost = cost[i];
            sum += (dist[i] * minCost);
        }

        System.out.println(sum);
    }
}
