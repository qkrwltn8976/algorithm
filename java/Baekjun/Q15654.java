package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Q15654 {
    // N개의 자연수 중에서 M개를 고른 수열
    // 수열은 사전 순으로 증가하는 순서로 출력
    static int N, M;
    static int[] num;
    static int[] arr;
    static boolean[] visited;
    static StringBuilder sb;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        num = new int[N];
        visited = new boolean[N];
        arr = new int[M+1];
        
        st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<N; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(num);

        sb = new StringBuilder();

        DFS(0);

        System.out.println(sb);
    }

    public static void DFS(int idx) {
        if (idx == M) {
            for (int i=0; i<M; i++) {
                sb.append(arr[i]).append(" ");
            }
            sb.append("\n");
            return;
        }

        for (int i=0; i<N; i++) {
            if (visited[i]) continue;
            arr[idx] = num[i];
            visited[i] = true;
            DFS(idx+1);
            visited[i] = false; // 가지치기 -> 해를 찾아가는 도중, 지금의 경로가 해가 될 것 같지 않으면 그 경로를 더이상 가지 않고 되돌아감
                                // 해당 노드의 부모노드로 되돌아간 후 다른 자손노드를 검색
        }
    }
}
