package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q12738 {
    public static int[] arr;
    public static int len = 0;
    public static int n;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        arr = new int[n];

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        binary(0, n-1);

        System.out.println(len);
    }

    public static int binary(int left, int right) {
        int mid;

        while (left <= right) {
            mid = (left+right) / 2;
            if (mid+1 < n && mid-1 > -1) {
                System.out.println(len);
                if (arr[mid] <= arr[mid+1]) {
                    len++;
                    left = mid + 1;
                } else if (arr[mid] >= arr[mid-1]){
                    len++;
                    right = mid - 1;
                } else if (arr[mid] > arr[mid+1]) {
                    left = mid + 2;
                } else if (arr[mid] < arr[mid-1]) {
                    right = mid - 2;
                }
            }  
        }

        return -1;
    }
}
