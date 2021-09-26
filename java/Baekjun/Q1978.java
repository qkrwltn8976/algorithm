package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q1978 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        //int [] arr = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int cnt = 0;
        while (st.hasMoreTokens()) {
            int num = Integer.parseInt(st.nextToken());
            int i;
            for (i=2; i<num; i++) {
                if (num % i == 0) {
                    break;
                }
            }
            if (i==num) cnt++;
        }
        System.out.println(cnt);
    }
}
