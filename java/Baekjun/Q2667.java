package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Collections;
import java.util.ArrayList;

public class Q2667 {
    public static int[] dx = {-1, 1, 0, 0};
    public static int[] dy = {0, 0, 1, -1};
    public static int[][] arr;
    public static boolean[][] visited;
    public static int n;
    public static int cnt = 1;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        arr = new int[n][n];
        visited = new boolean[n][n];
        ArrayList<Integer> floors = new ArrayList<>();

        for (int i=0; i<n; i++) {
            String s = br.readLine();
            for (int j=0; j<n; j++) {
                arr[i][j] = Character.getNumericValue(s.charAt(j));
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (!visited[i][j] && arr[i][j] == 1) {
                    dfs(j, i);
                    floors.add(cnt);
                    cnt = 1;
                }
            }
        }

        Collections.sort(floors);

        System.out.println(floors.size());

        for (Integer i : floors) {
            System.out.println(i);
        }
    }

    public static void dfs(int x, int y) {
        visited[y][x] = true;

        for (int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < n) {
                if (!visited[ny][nx] && arr[ny][nx] == 1) {
                    dfs(nx, ny);
                    cnt++;
                }
            }
        }
    }
}
