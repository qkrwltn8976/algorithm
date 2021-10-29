package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Q4195 {
    // 친구 관계가 생길 때마다, 두 사람의 친구 네트워크에 몇 명이 있는지 구하는 프로그램
    // 친구 관계의 수 F
    static int[] parents;
    static int[] count;
    static int F;
    static Map<String, Integer> map = new HashMap<>(); // HashMap을 사용해 문자열을 노드번호로 변환
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        while (T-- > 0) {
            F = Integer.parseInt(br.readLine());
            parents = new int[2*F];
            count = new int[2*F];

            for (int i=0; i<2*F; i++) {
                parents[i] = i;
                count[i] = 1; // 기본 친구수는 1명
            }

            int idx = 0;
            for (int i=0; i<F; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine(), " ");
                String a = st.nextToken();
                String b = st.nextToken();
                if (!map.containsKey(a)) {
                    map.put(a, idx++);
                }
                
                if (!map.containsKey(b)) {
                    map.put(b, idx++);
                }

                sb.append(union(map.get(a), map.get(b))).append("\n");
            }
        }

        System.out.println(sb);
    }

    private static int union(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) { 
            if (a < b) {
                parents[b] = a;
                count[a] += count[b];
                return count[a];
            } else {
                parents[a] = b;
                count[b] += count[a];
                return count[b];
            }
        }

        return count[a]; // 같은 부모인 경우
    }

    private static int find(int x) {
        if (x == parents[x]) {
            return x;
        } else {
            return parents[x] = find(parents[x]);
        }
    }
}
