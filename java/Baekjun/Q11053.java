package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
// 다이나믹 프로그래밍 Dynamic Programming[DP]
public class Q11053 {
    public static int[] arr;
    public static int[] d;
    public static int n;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        arr = new int[n];
        d = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        d[0] = 1;

        for (int i=1; i<n; i++) {
            d[i] = 1;
            for (int j=0; j<i; j++) {
                if (arr[j] < arr[i] && d[i] <= d[j]) {
                    d[i] = d[j] + 1; // 이전값 + 1
                }
            }
        }

        int max = 0;
        for (int i:d) {
            max = Math.max(i, max);
        }

        System.out.println(max);
    }
}
