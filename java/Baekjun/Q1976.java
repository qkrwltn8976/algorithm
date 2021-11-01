package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q1976 {
    static int N, M;
    static int[] parents;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine()); // 도시의 수 
        M = Integer.parseInt(br.readLine()); // 여행 계획에 속한 도시들의 수
        // i번째 줄의 j번째 수는 i번 도시와 j번 도시의 연결 정보
        // 마지막 줄에는 여행 계획
        parents = new int[N+1];
        for (int i=1; i<=N; i++) {
            parents[i] = i;
        }

        for (int i=1; i<=N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            for (int j=1; j<=N; j++) {
                int tmp = Integer.parseInt(st.nextToken());
                if (tmp == 1) {
                    union(i, j);
                }
            }
        }
        
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int start = Integer.parseInt(st.nextToken());

        for (int i=1; i<M; i++) {
            int tmp = Integer.parseInt(st.nextToken());
            // 맨 처음 출발 도시와 연결되어있지 않은 도시가 있으면
            // 여행 계획이 불가능한 것임.
            if (start != find(tmp)) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }

    private static void union(int a, int b) {
        a = find(a);
        b = find(b);

        if (a < b) {
            parents[b] = a;
        } else {
            parents[a] = b;
        }
    }

    private static int find(int a) {
        if (a == parents[a]) {
            return a;
        } else {
            return parents[a] = find(parents[a]);
        }
    }
}
