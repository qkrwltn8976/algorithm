package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q2581 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int m = Integer.parseInt(br.readLine());
        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        int min = 0;
        for (int i=m; i<=n; i++) {
            int j;
            for (j=2; j<i; j++) {
                if (i % j == 0) break;
            }
            
            if (j == i) {        
                if (sum == 0) 
                    min = j;
                sum += j;
            }
        }
        if (sum == 0) 
            System.out.println(-1);
        else {
            System.out.println(sum);
            System.out.println(min);
        }
    }
}
