package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q1743 {
    static int n, m, k;
    static int[][] map;
    static boolean[][] visited;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int answer = 0;
    static int cnt = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        map = new int[n][m];
        visited = new boolean[n][m];
        for (int i=0; i<k; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            map[a-1][b-1] = 1;
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (!visited[i][j] && map[i][j] == 1) {
                    cnt = 0;
                    answer = Math.max(answer, DFS(i, j));
                }
            }
        }

        
        System.out.println(answer);
    }

    public static int DFS(int x, int y) {
        visited[x][y] = true;
        cnt++;
        for (int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (visited[nx][ny]) continue;
            if (map[nx][ny] == 1) {
                visited[nx][ny] = true;
                
                DFS(nx, ny);
            }

        }
        
        return cnt;
    }
}
