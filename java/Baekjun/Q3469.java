package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Q3469 {
    public static char[][] arr;
    public static boolean[][] visited;
    public static int[] dx = {1, -1, 0, 0};
    public static int[] dy = {0, 0, 1, -1};
    public static Queue<int[]> q = new LinkedList<>();
    public static int sheep = 0;
    public static int wolf = 0;
    public static int r;
    public static int c;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        r = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());

        arr = new char[r][c];
        visited = new boolean[r][c];

        for (int i=0; i<r; i++) {
            arr[i] = br.readLine().toCharArray();       
        }

        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                if (arr[i][j] == '#') {
                    continue;
                }
                bfs(i, j);
            }
        }

        System.out.println(sheep + " " + wolf);
    }

    public static void bfs(int x, int y) {
        int o = 0;
        int v = 0;
        if (arr[x][y] == 'v') {
            v++;
        } 
        if (arr[x][y] == 'o') {
            o++;
        }
        arr[x][y] = '#';
        visited[x][y] = true;
        q.offer(new int[]{x, y});

        while (!q.isEmpty()) {
            int[] node = q.poll();

            for (int i=0; i<4; i++) {
                int nx = node[0] + dx[i];
                int ny = node[1] + dy[i];

                if (nx >=0 && nx < r && ny >= 0 && ny < c) {
                    if (!visited[nx][ny] && arr[nx][ny] != '#') {
                        if (arr[nx][ny] == 'v') {
                            v++;
                        }
                        if (arr[nx][ny] == 'o') {
                            o++;
                        }
                        arr[nx][ny] = '#';
                        visited[nx][ny] = true;
                        q.offer(new int[]{nx, ny});
                    }
                } 
            }
        }

        if (o > v) {
            sheep += o;
        } else {
            wolf += v;
        }
    }
}
