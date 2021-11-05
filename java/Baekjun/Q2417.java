package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q2417 {
    // q2 ≥ n인 가장 작은 음이 아닌 정수 q
    static int cnt = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long n = Long.parseLong(br.readLine());
        long left = 0;
        long right = n;
        long min = Long.MAX_VALUE;

        while (left <= right) {
            long mid = (left + right) / 2;
            long val = (long) Math.pow(mid, 2);
            
            if (val >= 0) {       
                if (val >= n) {
                    right = mid-1;
                    min = Math.min(mid, min); // q2 ≥ n  
                } else {
                    left = mid+1;
                } 
            }
            
        }

        System.out.println(min);

    }
}
