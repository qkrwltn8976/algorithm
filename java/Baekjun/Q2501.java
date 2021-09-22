package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q2501 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int p = Integer.parseInt(st.nextToken());
        int q = Integer.parseInt(st.nextToken());

        int i;
        for (i=1; i<=p; i++) {
            if (p % i == 0) {
                q--;
                if (q == 0) {
                    System.out.println(i);
                    return;
                }
            }
        }

        System.out.println(0);
        
    }
}
