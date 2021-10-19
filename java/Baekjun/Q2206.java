package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;
// 최단거리 문제이므로 BFS, 0은 이동할 수 있는 곳을 나타내고, 1은 이동할 수 없는 벽이 있는 곳
// visited배열의 인덱스를 추가해서 벽을 부수지 않고 이동했을때의 방문 여부
public class Q2206 {
    static char[][] map;
    static boolean[][][] visited;
    static int n, m;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        map = new char[n][m];
        visited = new boolean[n][m][2];
        for (int i=0; i<n; i++) {
            map[i] = br.readLine().toCharArray();
        }

        System.out.println(BFS(0 ,0));
    }

    public static int BFS(int x, int y) {
        Queue<Node> q = new LinkedList<>();
        visited[x][y][0] = true; // 벽을 부수지 않았을 경우
        visited[x][y][1] = true; // 벽을 부쉈을 경우
        q.offer(new Node(x, y, 0, 1));
        
        while (!q.isEmpty()) {
            Node node = q.poll();
            if (node.x == n-1 && node.y == m-1) { // 목적지에 도달한 경우
                return node.cnt;
            }
            for (int i=0; i<4; i++) {
                int nx = dx[i] + node.x;
                int ny = dy[i] + node.y;
    
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                
                if (map[nx][ny] == '0') { // 벽이 아닐 때
                    if (visited[nx][ny][node.wall]) continue; //현재까지 온 방법(벽을 부쉈는지 아닌지)으로 방문한 적이 없다면 방문한다.
                    q.offer(new Node(nx, ny, node.wall, node.cnt+1));
                    visited[nx][ny][node.wall] = true;
                } else if (map[nx][ny] == '1') { // 벽일때
                    if (visited[nx][ny][1]) continue; //현재까지 벽을 부순적이 없고, 벽을 부숴서 방문한 적이 없다면 방문한다.
                    if (node.wall == 0) {
                        q.offer(new Node(nx, ny, 1, node.cnt+1));
                        visited[nx][ny][1] = true;
                    }
                } 
            }
        }
        return -1;
    }

    public static class Node {
        private int x;
        private int y;
        private int wall;
        private int cnt;

        public Node(int x, int y, int wall, int cnt) {
            this.x = x;
            this.y = y;
            this.wall = wall;
            this.cnt = cnt;
        }
    }
}
