package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Q10815 {
    public static int[] cards;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        cards = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i=0; i<n; i++) {
            cards[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(cards);
        int m = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine(), " ");

        StringBuilder sb = new StringBuilder();
        for (int i=0; i<m; i++) {
            sb.append(binary(Integer.parseInt(st.nextToken()), 0, n-1) > -1 ? 1 : 0);
            sb.append(i==m-1 ? "" : " ");
        }

        System.out.println(sb);
    }

    public static int binary(int key, int left, int right) {
        int mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (key == cards[mid]) {
                return mid;
            } else if (key < cards[mid]) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }
        
        return -1;
    }
}
