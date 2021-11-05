package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Q2512 {
    // 배정된 예산들 중 최댓값인 정수  
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int sum = Integer.parseInt(br.readLine());
        int max = 0;
        Arrays.sort(arr);
        int left = 0;
        int right = arr[N-1];
        while (left <= right) {
            int mid = (left + right) / 2;
            int tmp = 0;
            for (int i=0; i<N; i++) {
                if (arr[i] < mid)
                    tmp += arr[i];
                else   
                    tmp += mid;
            }
            if (tmp > sum) {
                right = mid - 1;
            } else {
                max = Math.max(max, mid);
                left = mid + 1;
            }
        }

        System.out.println(max);
    }
}
