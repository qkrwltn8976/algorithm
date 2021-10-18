package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q10162 {
    // 버튼 A, B, C에 지정된 시간은 각각 5분(300초), 1분(60초), 10초이다.
    // A, B, C 3개의 버튼을 적절히 눌러서 그 시간의 합이 정확히 T초가 되도록 해야 한다.
    // 단 버튼 A, B, C를 누른 횟수의 합은 항상 최소가 되어야 한다. 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int[] cnt = new int[3];

        if (T >= 300) {
            cnt[0] += T / 300;
            T -= 300 * cnt[0];
        }

        if (T >= 60) {
            cnt[1] += T / 60;
            T -= 60 * cnt[1];
        } 

        if (T % 10 != 0) {
            System.out.println(-1);
            return;
        } else {
            cnt[2] = T / 10;
        }

        StringBuilder sb = new StringBuilder();
        for (int i=0; i<3; i++) {
            sb.append(cnt[i] + " ");
        }

        System.out.println(sb);
    }
}
