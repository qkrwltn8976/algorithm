package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.LinkedList;
import java.util.Queue;

public class Q2644 {
    static int n, m, a, b;
    static int[][] map;
    static boolean[] visited;
    static Queue<int[]> q;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine()); // 전체 수
        StringTokenizer st = new StringTokenizer(br.readLine(), " "); // 촌수 계산해야 하는 번호
        a = Integer.parseInt(st.nextToken());
        b = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(br.readLine()); // 부모 자식 관계 수

        map = new int[n+1][n+1];
        visited = new boolean[n+1];

        for (int i=1; i<=m; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            map[x][y] = 1;
            map[y][x] = 1;
        }


        System.out.println(BFS(a));
    }

    public static int BFS(int idx) {
        q = new LinkedList<>();
        visited[idx] = true;
        q.offer(new int[]{idx, 0});

        while (!q.isEmpty()) {
            int[] node = q.poll();
            for (int i=1; i<=n; i++) {
                int n_idx = node[0];
                int n_cnt = node[1];
                if (n_idx == b) {
                    return n_cnt;
                }
                if (visited[i]) continue;
            
                if (map[n_idx][i] == 1) {
                    visited[i] = true;
                    n_cnt++;
                    q.offer(new int[]{i, n_cnt});
                }
            }
        }

        return -1;
    }
}