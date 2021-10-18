package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

public class Q2217 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine()); // N개의 줄
        Integer[] arr = new Integer[N];
        int max = 0;
        // w = min( 병렬 연결된 로프의 중량 ) * 병렬 연결된 로프의 수
        for (int i=0; i<N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(arr, Collections.reverseOrder());

        for (int i=0; i<N; i++) {
            max = Math.max(arr[i]*(i+1), max);
        }

        System.out.println(max);
    }
}
