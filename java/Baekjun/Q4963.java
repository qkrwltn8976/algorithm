package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q4963 {
    public static int[] dx = {-1, 1, 0, 0, 1, 1, -1, -1};
    public static int[] dy = {0, 0, 1, -1, -1, 1, -1, 1};
    public static int w;
    public static int h;
    public static int[][] arr;
    public static boolean[][] visited;
    public static int cnt;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        while (true) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            w = Integer.parseInt(st.nextToken());
            h = Integer.parseInt(st.nextToken());

            if (w == 0 && h == 0) {
                return;
            }
            
            arr = new int[h][w];
            visited = new boolean[h][w];
            cnt = 0;

            for (int i=0; i<h; i++) {
                st = new StringTokenizer(br.readLine(), " ");
                for (int j=0; j<w; j++) {
                    arr[i][j] = Integer.parseInt(st.nextToken());
                }
            }

            for (int i=0; i<h; i++) {
                for (int j=0; j<w; j++) {
                    if (!visited[i][j] && arr[i][j] == 1) {
                        dfs(j, i);
                        cnt++;
                    } 
                }
            }
               
            System.out.println(cnt);
        }
    }

    public static void dfs(int x, int y) {
        visited[y][x] = true;

        for (int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && ny >= 0 && nx < w && ny < h) {
                if (!visited[ny][nx] && arr[ny][nx] == 1) {    
                    dfs(nx, ny);
                }
            }
        }
    }
}
