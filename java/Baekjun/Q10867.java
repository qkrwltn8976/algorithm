package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;

public class Q10867 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        HashSet<Integer> set = new HashSet<>();

        for (int i=0; i<N; i++) {
            int n = Integer.parseInt(st.nextToken());
            if (!set.contains(n)) {
                set.add(n);
            }
        }
        
        ArrayList<Integer> arr = new ArrayList<>(set);
        Collections.sort(arr);
        
        StringBuilder sb = new StringBuilder();
        for (int i=0; i<arr.size(); i++) { 
            sb.append(arr.get(i));
            if (i!=N-1) {
                sb.append(" ");
            }
        }

        System.out.println(sb);
    }
}
