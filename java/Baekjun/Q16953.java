package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q16953 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int cnt = 1;
        while (a != b) {
            if (a > b) {
                cnt = -1;
                break;
            }

            if (b % 2 != 0 && b % 10 != 1) {
                cnt = -1;
                break;
            }
            
            if (b % 2 == 0) {
                b /= 2;
            } else if (b % 10 == 1){ // 끝자리 1
                b /= 10;
            }
           
            cnt++;
        }

        System.out.println(cnt);
    }
}
