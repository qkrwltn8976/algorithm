package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q2275 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int[][] apt = new int[15][15];

        for (int i=0; i<15; i++) {
            apt[0][i] = i;
            apt[i][1] = 1;
        }

        while (T-- > 0) {
            int k = Integer.parseInt(br.readLine()); // 층
            int n = Integer.parseInt(br.readLine()); // 호

            for (int i=1; i<=k; i++) {
                for (int j=2; j<=n; j++) {
                    apt[i][j] = apt[i-1][j] + apt[i][j-1];
                }
            }
            
            System.out.println(apt[k][n]);
        }
    }
}
