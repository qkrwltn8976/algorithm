package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q15649 {
    // 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
    static int N, M;
    static StringBuilder sb;
    static int[] arr;
    static boolean[] visited;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        sb = new StringBuilder();
        arr = new int[N+1];
        visited = new boolean[N+1];

        DFS(0);

        System.out.println(sb);
    }

    public static void DFS(int idx) {
        if (idx == M) {
            for (int i=0; i<M; i++) {
                sb.append(arr[i]).append(" ");
            }
            sb.append("\n");
        }

        for (int i=1; i<=N; i++) {
            if (visited[i]) continue;
            arr[idx] = i;
            visited[i] = true;
            DFS(idx+1);
            visited[i] = false;
        }
    }
}
