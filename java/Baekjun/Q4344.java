package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q4344 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int C = Integer.parseInt(br.readLine());

        for (int i=0; i<C; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int n = Integer.parseInt(st.nextToken());
            double avg = 0.0;
            
            int[] list = new int[n];
            for (int j=0; j<n; j++) {
                list[j] = Integer.parseInt(st.nextToken());
                avg += list[j];
            }
            avg /= n;

            int cnt = 0;
            for (int j=0; j<n; j++) {
                if (list[j] > avg) {
                    cnt++;
                }
            }

            System.out.printf("%.3f", 100.0 * cnt / n);
			System.out.println("%");
        }

        br.close();
    }
}
