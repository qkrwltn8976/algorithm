package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.ArrayList;
public class Q1292 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        
        ArrayList<Integer> arr = new ArrayList<Integer>();
        
        for (int i=1; i<=1000; i++) {
            for (int j=0; j<i; j++) {
                arr.add(i);
            }
        }
        int sum = 0;
        for (int i=a; i<=b; i++) {
            sum += arr.get(i-1);
        }

        System.out.println(sum);
    }
}
