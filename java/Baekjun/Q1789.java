package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q1789 {
    // S를 알 때, 자연수 N의 최댓값
    // 가장 많은 자연수를 사용해서 S를 만들어라
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long S = Long.parseLong(br.readLine());  // 서로 다른 N개의 자연수의 합이 S, 첫째 줄에 자연수 S(1 ≤ S ≤ 4,294,967,295)
        long sum = 1;
        long n = 1;
        while (S > sum) {
            n++;
            sum += n;    
        }

        if (S < sum) { // 만약 모든 수를 더했을 때 주어진 S보다 크다면 N까지 더한 수에서 S를 만들기 위해 어떤 자연수 하나를 빼면 됩니다
            n--;
        }

        System.out.println(n);
    }
}
