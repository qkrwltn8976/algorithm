package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
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
    static int[] parent;
    static int ans;
    static ArrayList<Edge> edgeList = new ArrayList<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        V = Integer.parseInt(st.nextToken());
        E = Integer.parseInt(st.nextToken());

        //parent 초기화
        parent = new int[V+1];

        for (int i=1; i<=V; i++) {
            parent[i] = i;
        }
        
        //연결노드 초기화
        for (int i=0; i<E; i++) {
            st = new StringTokenizer(br.readLine(), " ");
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            edgeList.add(new Edge(a, b, c));
        }

        Collections.sort(edgeList); // 가중치 오름차순 정렬

        // 최소신장트리 탐색
        for (int i=0; i<edgeList.size(); i++) {
            Edge edge = edgeList.get(i);
            if (!isSameParent(edge.start, edge.end)) { // 3. 사이클을 형성하는 경우 간선을 포함하지 않음
                ans += edge.weight;
                union(edge.start, edge.end); // 연결
            }
        }
        
        if (!edgeList.isEmpty()) {
            System.out.println(ans);
        }
    }

    // 두 부모 노드를 합치는 함수
    private static void union(int x, int y) {
        x = getParent(x);
        y = getParent(y);

        if (x < y) {
            parent[y] = x; // 더 작은 값으로 부모 설정
        } else {
            parent[x] = y;
        }
    }

    // 부모 노드를 찾는 함수
    private static int getParent(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            return parent[x] = getParent(parent[x]);
        }
    }

    // 같은 부모를 가지는지 확인하는 함수
    private static boolean isSameParent(int x, int y) {
        x = getParent(x);
        y = getParent(y);
        return x == y;
    }

    static class Edge implements Comparable<Edge>{
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
