package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Q5052 {
    //전화번호 목록이 일관성을 유지하려면, 한 번호가 다른 번호의 접두어인 경우가 없어야 한다.
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String[] arr = new String[n];
            
            for (int i=0; i<n; i++) {
                String s = br.readLine();
                arr[i] = s;
            }

            /**
             *  만약 전화 번호 목록 안에 접두어 관계가 있는 문자열이 있다면,
             *  특정 문자열 바로 뒤에 접두어 관계가 있는 문자열이 있을 것이다.
             *  결과적으로, 전화번호 목록이 일관성이 있는지 검사하려면
             *  특정 문자열과 그 다음 문자열의 접두어 관계만 확인하면 된다.
             */

            Arrays.sort(arr);
            
            boolean result = true;
            
            for (int i=1; i<n; i++) {
                if (arr[i].startsWith(arr[i-1])) {
                    result = false;
                    break;
                }
            }

            System.out.println(result ? "YES" : "NO");
        }
    }
}
