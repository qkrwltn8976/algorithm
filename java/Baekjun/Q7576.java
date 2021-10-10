package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q7576 {
    static int m, n;
    static int[][] map;
    static boolean[][] visited;
    static Queue<int[]> q = new LinkedList<>();
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    static int days=0;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        m = Integer.parseInt(st.nextToken()); // 가로
        n = Integer.parseInt(st.nextToken()); // 세로
        map = new int[n][m];

        for (int i=0; i<n; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            for (int j=0; j<m; j++) {
                map[i][j] = Integer.parseInt(st.nextToken());

                if (map[i][j] == 1) {
                    q.offer(new int[]{i, j});
                } // bfs를 시작하는 노드를 큐에 추가
            }
        }   
        System.out.println(BFS());
    }

    public static int BFS() {
        while (!q.isEmpty()) {
            int[] node = q.poll();
            for (int i=0; i<4; i++) {
                int nx = node[0] + dx[i];
                int ny = node[1] + dy[i];
                
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                if (map[nx][ny] == 0) {       
                    map[nx][ny] = map[node[0]][node[1]] + 1;  // 익은 토마토의 값 = 이전에 익은 토마토의 값 + 1
                    q.offer(new int[]{nx, ny});
                }
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (map[i][j] == 0) return -1;
                days = Math.max(days, map[i][j]);
            }
        }

        if (days == 1) { // 원래부터 익어있던 상태
            return 0;
        } 
        return days - 1;
    }
}
