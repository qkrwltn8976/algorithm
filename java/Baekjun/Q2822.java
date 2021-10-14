package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Q2822 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[][] arr = new int[8][2];
        int sum = 0;

        for (int i=0; i<8; i++) {
            arr[i][0] = Integer.parseInt(br.readLine());
            
            arr[i][1] = i+1;
        }

        Arrays.sort(arr, (o1, o2) -> {
            if (o1[0] > o2[0]) {
                return 1;
            } else {
                return -1;
            }
        });

        StringBuilder sb = new StringBuilder();
        for (int i=0; i<8; i++) {
            if (i>=0 && i<3) {
                arr[i][1] = -1;
            } else {
                sum += arr[i][0];
            }
        }

        Arrays.sort(arr, (o1, o2) -> {
            if (o1[1] > o2[1]) {
                return 1;
            } else {
                return -1;
            }
        });

        for (int i=0; i<8; i++) {
            if ( arr[i][1] != -1) {
                sb.append(arr[i][1]);
                if (i != 7) {
                    sb.append(" ");
                }
            } 
        }

        System.out.println(sum);
        System.out.println(sb);
    }
}
