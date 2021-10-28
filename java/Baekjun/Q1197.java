package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Q1197 {
    // 최소 스패닝 트리의 가중치
    /** 크루스칼 알고리즘 
     * 간선 수 = 노드 수 - 1
     * 
     * [구현]
     * 간선을 짧은 순서대로 그래프에 포함시킴
     * 모든 간선정보를 오름차순으로 정렬한 뒤 비용이 적은 간선부터 그래프에 포함시킴
     * 단, 사이클이 형성되어서는 안됨
     * 
     * 1. 정렬된 순서에 맞게 그래프에 포함시킴
     * 2. 포함시키기 전에 사이클 테이블 확인
     * 3. 사이클을 형성하는 경우 간선을 포함하지 않음
     * 
     * [Union Find 합집합 찾기 == Disjoint Set 서로소 집합 알고리즘]
     * 여러 개의 노드가 존재할 때 두 개의 노드를 선택해서 두 노드가 서로 같은 그래프에 속하는지 판별
     * */ 
    // 정점의 개수 V(1 ≤ V ≤ 10,000)와 간선의 개수 E(1 ≤ E ≤ 100,000)
    static int V, E;
    static int[][] map;
    static boolean[] visited;
    static int ans;
    static ArrayList<Integer> arr = new ArrayList<>();
    static PriorityQueue<Integer> pq = new PriorityQueue<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        V = Integer.parseInt(st.nextToken());
        E = Integer.parseInt(st.nextToken());

        map = new int[V+1][V+1];
        visited = new boolean[V+1];

        for (int i=0; i<E; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            map[a][b] = c;
            map[b][a] = c;
        }
        
        for (int i=1; i<=E; i++) {
            visited[i] = true;
            DFS(i, 1);
            visited[i] = false;
        }
        
        Collections.sort(arr);

        if (!arr.isEmpty()) {
            System.out.println(arr.get(0));
        }
    }

    public static void DFS(int prev, int idx) {
        if (idx == E) {
            arr.add(ans);
            return;
        }

        for (int i=1; i<=E; i++) {
            if (visited[i]) continue;
            ans += map[prev][i];
            visited[i] = true;
            DFS(i, idx+1);
            visited[i] = false;
            ans = 0;
        }
    }

    static class Edge {
        int start;
        int end;
        int weight;
    }
}
