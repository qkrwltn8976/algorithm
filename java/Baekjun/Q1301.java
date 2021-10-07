package Baekjun;
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.util.LinkedList; 
import java.util.Queue; 
import java.util.StringTokenizer; 

public class Q1301 { 
    public static int N, M, white, blue, arr[][]; 
    public static int dx[] = {-1, 0, 1, 0}; 
    public static int dy[] = {0, -1, 0, 1}; 
    public static Queue<int[]> q; 
    public static boolean vtd[][]; 
    public static void solve(int num) { 
        int answer = 1; 
        while(!q.isEmpty()) { 
            int tmp[] = q.poll(); 
            int x = tmp[0]; 
            int y = tmp[1]; 
            for(int i = 0; i < 4; i++) { 
                int nx = x + dx[i]; 
                int ny = y + dy[i]; 
                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue; 
                if(!vtd[nx][ny] && arr[nx][ny] == num) { 
                    q.add(new int[] {nx, ny}); 
                    vtd[nx][ny] = true; 
                    answer += 1; 
                } 
            } 
        } 
        if(num == 0) 
            white += (answer*answer); 
        else 
            blue += (answer*answer); 
    } 
    public static void main(String[] args) throws Exception { 
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in)); 
        StringTokenizer st = new StringTokenizer(bf.readLine()); 
        M = Integer.parseInt(st.nextToken()); 
        N = Integer.parseInt(st.nextToken()); 
        arr = new int[N][M]; 
        q = new LinkedList<int[]>(); 
        vtd = new boolean[N][M]; 
        white = 0; 
        blue = 0; 
        for(int i = 0; i < N; i++) { 
            st = new StringTokenizer(bf.readLine()); 
            String str = st.nextToken(); 
            for(int j = 0; j < M; j++) { 
                char ch = str.charAt(j); 
                arr[i][j] = (ch == 'W') ? 0 : 1; 
            } 
        } 
        for(int i = 0; i < N; i++) { 
            for(int j = 0; j < M; j++) { 
                if(!vtd[i][j]) { 
                    q.add(new int[] {i, j}); 
                    vtd[i][j] = true; 
                    solve(arr[i][j]); 
                } 
            } 
        } 
        System.out.println(white + " " + blue); 
    } 
}

// import java.io.BufferedReader;
// import java.io.IOException;
// import java.io.InputStreamReader;
// import java.util.LinkedList;
// import java.util.StringTokenizer;
// import java.util.Queue;

// public class Q1301 {
//     static int n, m;
//     static int[] dx = {1, -1, 0, 0};
//     static int[] dy = {0, 0, 1, -1};
//     static char[][] map;
//     static boolean[][] visited;
//     static int cnt;
//     static int tot_b = 0, tot_w = 0;
//     static Queue<int[]> q;
//     public static void main(String[] args) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         StringTokenizer st = new StringTokenizer(br.readLine(), " ");

//         n = Integer.parseInt(st.nextToken());
//         m = Integer.parseInt(st.nextToken());
//         map = new char[n][m];
//         visited = new boolean[n][m];
//         q = new LinkedList<>();

//         for (int i=0; i<n; i++) {
//             map[i] = br.readLine().toCharArray();
//         }

//         for (int i=0; i<n; i++) {
//             for (int j=0; j<m; j++) {
//                 if (!visited[i][j]) {
//                     visited[i][j] = true;
//                     q.offer(new int[]{i, j});
//                     BFS(i, j);
//                 }
//             }
//         }

//         System.out.println(tot_w + " " + tot_b);
         
//     }

//     public static void BFS(int x, int y) { 
//         cnt = 1;
        
//         while (!q.isEmpty()) {
//             int[] node = q.poll();
            
//             for (int i=0; i<4; i++) {
//                 int nx = node[0] + dx[i];
//                 int ny = node[1] + dy[i];   
                
//                 if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
//                 if (visited[nx][ny]) continue;
                
//                 if (map[x][y] == map[nx][ny]) {
//                     visited[nx][ny] = true;
//                     q.offer(new int[]{nx, ny});
//                     cnt++;
//                 } 
//             }   
//         }   
        
//         if (map[x][y] == 'W') {
//             tot_w += cnt*cnt;
//         } else {
//             tot_b += cnt*cnt;
//         }
//     }
// }
