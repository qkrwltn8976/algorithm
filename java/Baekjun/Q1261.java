package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.PriorityQueue;
import java.util.Queue;
// 우선순위 큐
class Node implements Comparable<Node>{
    int x;
    int y;
    int cnt; // 벽 부순 개수

    public Node(int x, int y, int cnt) {
        this.x = x;
        this.y = y;
        this.cnt = cnt;
    }

    @Override
    public int compareTo(Node o) {
        // 오름차순
        return this.cnt - o.cnt;
    }
    
}
public class Q1261 {
    static int n, m;
    static int[][] map;
    static boolean[][] visited;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, 1, -1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        n = Integer.parseInt(st.nextToken()); // 세로
        m = Integer.parseInt(st.nextToken()); // 가로

        map = new int[m][n];
        visited = new boolean[m][n];
        
        for (int i=0; i<m; i++) {
            String s = br.readLine();
            for (int j=0; j<n; j++) {
                map[i][j] = Character.getNumericValue(s.charAt(j));
            }
        }
        
        System.out.println(bfs(0, 0));
    }

    public static int bfs(int x, int y) {
        Queue<Node> q = new PriorityQueue<>();

        visited[x][y] = true;
        q.offer(new Node(x, y, 0));
        
        while (!q.isEmpty()) {
            Node node = q.poll();

            if (node.x == m-1 && node.y == n-1) {
                return node.cnt;
            } 

            for (int i=0; i<4; i++) {
                int nx = node.x + dx[i];
                int ny = node.y + dy[i];

                if (nx >= 0 && nx < m && ny >=0 && ny < n) {
                    if (!visited[nx][ny]) {
                        visited[nx][ny] = true;
                        if (map[nx][ny] == 0) {
                            q.offer(new Node(nx, ny, node.cnt));
                        } else {
                            q.offer(new Node(nx, ny, node.cnt+1));
                        }
                    }
                }
            }
        }  
        
        return 0;
    }
}
