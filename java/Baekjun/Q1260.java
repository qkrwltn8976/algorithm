package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.LinkedList;
import java.util.Queue;

public class Q1260 {
    public static int[][] arr;
    public static boolean[] visited;
    public static int n;
    public static Queue<Integer> q = new LinkedList<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int v = Integer.parseInt(st.nextToken());

        arr = new int[n+1][n+1];
        visited = new boolean[n+1];

        while (m-- > 0) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            arr[a][b] = 1;
            arr[b][a] = 1;
        }

        dfs(v);

        visited = new boolean[n+1];
        System.out.println("");
        
        bfs(v);
        System.out.println("");
    }

    public static void bfs(int x) {
        q.offer(x);
        visited[x] = true;

        while (!q.isEmpty()) {
            x = q.poll();

            System.out.print(x + " ");

            for (int i=1; i<=n; i++) {
                if (!visited[i] && arr[x][i] == 1) {
                    visited[i] = true;
                    q.offer(i);
                }
            }
        }
    }

    public static void dfs(int x) {
        visited[x] = true;
        System.out.print(x + " ");

        for (int i=1; i<=n; i++) {
            if (!visited[i] && arr[x][i] == 1) {
                dfs(i);
            }
        }
    }
}
