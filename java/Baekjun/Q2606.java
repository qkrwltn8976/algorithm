package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.LinkedList;
import java.util.Queue;

public class Q2606 {
    static int n, m, cnt = 0;
    static int[][] map;
    static boolean[] visited;
    static Queue<Integer> q;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        m = Integer.parseInt(br.readLine());

        map = new int[n+1][n+1];
        visited = new boolean[n+1];

        for (int i=0; i<m; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            map[a][b] = 1;
            map[b][a] = 1;
        }

        BFS(1);

       System.out.println(cnt);
    }

    public static void BFS(int idx) {
        q = new LinkedList<>();
        q.offer(idx);
        visited[idx] = true;

        while (!q.isEmpty()) {
            int node = q.poll();
            for (int i=1; i<=n; i++) {
                if (visited[i]) continue;
                if (map[node][i] == 1) {
                    q.offer(i);
                    visited[i] = true;
                    cnt++;
                }
            }
        }
    }
}
