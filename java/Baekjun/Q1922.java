package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Q1922 {
    static int n, m;
    static int ans = 0; // 모든 컴퓨터를 연결하는데 필요한 최소비용
    static int[] parents; 
    static ArrayList<Edge> edgeList = new ArrayList<>();
    // a와 b는 같을 수도 있다.
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine()); // 컴퓨터의 수 N
        m = Integer.parseInt(br.readLine()); // 연결할 수 있는 선의 수 M

        parents = new int[n+1];

        for (int i=1; i<=n; i++) {
            parents[i] = i;
        }

        for (int i=0; i<m; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            edgeList.add(new Edge(a, b, c));
        }

        Collections.sort(edgeList);

        for (int i=0; i<edgeList.size(); i++) {
            Edge edge = edgeList.get(i);
            if (!isSameParent(edge.start, edge.end)) {
                ans += edge.weight;
                union(edge.start, edge.end);
            }
            
        }

        System.out.println(ans);
    }

    private static void union(int x, int y) {
        x = getParent(x);
        y = getParent(y);
        if (x < y) {
            parents[y] = x;
        } else {
            parents[x] = y;
        }
    }

    private static int getParent(int x) {
        if (parents[x] == x) { // 재귀함수의 종료부분
            return x;
        } else {
            return parents[x] = getParent(parents[x]);
        }
    }

    private static boolean isSameParent(int x, int y) {
        x = getParent(x);
        y = getParent(y);
        return x == y;
    }

    public static class Edge implements Comparable<Edge> {
        int start;
        int end;
        int weight;

        public Edge(int start, int end, int weight) {
            this.start = start;
            this.end = end;
            this.weight = weight;
        }

        @Override
        public int compareTo(Edge o) {
            return weight - o.weight;
        }
    }
}

// https://youngest-programming.tistory.com/451