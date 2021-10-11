package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q9613 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            long[] map = new long[n]; // 입력으로 주어지는 수는 1,000,000을 넘지 않는다
            long sum = 0;
            for (int i=0; i<n; i++) {
                map[i] = Integer.parseInt(st.nextToken());
            }
            for (int i=0; i<n; i++) {
                for (int j=i+1; j<n; j++) {
                    sum += GDC(map[i], map[j]);
                }
            }

            System.out.println(sum);
        }
    }

    public static long GDC(long a, long b) {   
        while (b != 0) {
            long r = a % b;
            a = b;
            b = r;
        }

        return a;
    }
}
