package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Q1759 {
    // 서로 다른 L개의 알파벳 소문자들로 구성되며 최소 한 개의 모음(a, e, i, o, u)과 최소 두 개의 자음으로 구성
    // 암호를 이루는 알파벳이 암호에서 증가하는 순서로 배열
    // 자음으로 먼저 구성 후 나중에 모음 추가
    static int L, C;
    static char[] arr;
    static StringBuilder ans;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        L = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
 
        arr = new char[C];
        st = new StringTokenizer(br.readLine(), " ");

        for (int i=0; i<C; i++) {
            arr[i] = st.nextToken().charAt(0); // String -> char
        }

        Arrays.sort(arr);

        ans = new StringBuilder();
        combination(0, 0, "");
        System.out.println(ans);
    }

    public static void combination(int cnt, int idx, String s) {
        if (cnt == L) { // 주어진 길이만큼 암호가 만들어지면
            int vowelCnt = 0;
            int consonantCnt = 0;

            for (int i=0; i<L; i++) {
                if (s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || 
                    s.charAt(i) == 'o' || s.charAt(i) == 'u') {
                    vowelCnt++;
                } else {
                    consonantCnt++;
                }
            }

            // 모음, 자음 조건 체크
            if (vowelCnt >= 1 && consonantCnt >= 2) {
                ans.append(s).append("\n");
            }

            return;
        }

        // 알파벳 암호 조합
        for (int i=idx; i<C; i++) {
            combination(cnt+1, i+1, s+Character.toString(arr[i]));
        }
    }
}
