package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Q15655 {
    static int N, M;
    static int[] num;
    static boolean[] visited;
    static int[] arr;
    static StringBuilder sb;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        num = new int[N];
        visited = new boolean[N];
        arr = new int[M];

        st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<N; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(num);
        sb = new StringBuilder();

        DFS(0);

        System.out.println(sb);
    }

    public static void DFS(int idx) {
        if (idx == M) {
            for (int i=0; i<M; i++) {
                sb.append(arr[i]).append(" ");
            }
            sb.append("\n");
            return;
        }

        for (int i=0; i<N; i++) {
            if (visited[i]) continue;
            if (idx > 0 && num[i] < arr[idx-1]) continue;  
            arr[idx] = num[i];
            visited[i] = true;
            DFS(idx+1);
            visited[i] = false;
        }
    }
}
