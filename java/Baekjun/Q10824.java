package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q10824 { // NumberFormat 런타임 에러 발생 시 Integer -> Long
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        String[] arr = new String[4];
        for (int i=0; i<4; i++) {
            arr[i] = st.nextToken();
        }
        System.out.println(Long.parseLong(arr[0]+arr[1]) + Long.parseLong(arr[2]+arr[3]));
    }
}
