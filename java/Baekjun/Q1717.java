
package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q1717 {
    static int[] parents;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        parents = new int[n+1];
        // 0 합집합 1 확인
        for (int i=1; i<=n; i++) {
            parents[i] = i;
        }

        for (int i=0; i<m; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            if (a==0) { // union
                union(b, c);
            } else if (a==1) { // find
                System.out.println(isSameParent(b, c) ? "YES" : "NO");
            }
        }
    }

    private static void union(int x, int y) {
        x = find(x);
        y = find(y);

        if (x < y) {
            parents[y] = x;
        } else {
            parents[x] = y;
        }
    }

    private static int find(int x) {
        if (x == parents[x]) {
            return x; 
        } else {
            return parents[x] = find(parents[x]);
        }
    }

    private static boolean isSameParent(int x, int y) {
        x = find(x);
        y = find(y);

        return x == y;
    }
}
