package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q10026 {
    public static int N;
    public static char[][] map;
    public static boolean[][] visited;
    public static int YES = 0;
    public static int NO = 0;
    public static int[] dy = {-1, 1, 0, 0};
    public static int[] dx = {0, 0, 1, -1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        map = new char[N][N];
        visited = new boolean[N][N];

        for (int i=0; i<N; i++) {
            map[i] = br.readLine().toCharArray();
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (!visited[i][j]) {
                    dfs(i, j);
                    NO++;
                }
            }
        }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (map[i][j] == 'G') {
                    map[i][j] = 'R';
                }
            }
        }
        
        visited = new boolean[N][N];
        
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (!visited[i][j]) {
                    dfs(i, j);
                    YES++;
                }
            }
        }

        System.out.println(NO + " " + YES);
    } 

    public static void dfs(int x, int y) {
        visited[x][y] = true;
        
        for (int i=0; i<4; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
                if (!visited[nx][ny] && map[x][y] == map[nx][ny]) {
                    dfs(nx, ny);
                }
            }
        }
    }
}
