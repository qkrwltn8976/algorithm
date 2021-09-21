package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.io.IOException;

public class Q1302 {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        HashMap<String, Integer> map = new HashMap<String, Integer>();

        for (int i=0; i<n; i++) {
            String key = br.readLine();

            if (map.containsKey(key)) {
                map.put(key, map.get(key)+1);
            } else {
                map.put(key, 1);
            }
         
        }

        int max = 0;
        String maxKey = "";
        for (String key : map.keySet()) {
            int value = map.get(key);
            
            if (max < value || 
                max == value && maxKey.compareTo(key) > 0) {       
                // 만약 가장 많이 팔린 책이 여러 개일 경우에는 사전 순으로 가장 앞서는 제목을 출력한다. 
                // 사전순으로 앞에 위치함은 compareTo로 문자열 비교 시 더 작은 값을 저장함을 의미
                max = value;
                maxKey = key;
            } 
            
            
        }
        
        System.out.println(maxKey);
    }
}
