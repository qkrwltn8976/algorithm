package Baekjun;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Q11652 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Long, Integer> map = new HashMap<Long, Integer>();
        int max_cnt=1;
        long max_value= 0;
        for (int i = 0; i < n; i++) {
            long key = Long.parseLong(sc.next());
            if(map.containsKey(key)){
                int val = map.get(key)+1;
                map.put(key,val);
                if(max_cnt == map.get(key)){
                    max_value= Math.min(max_value, key);
                }else if(max_cnt < map.get(key)){
                    max_cnt=map.get(key);
                    max_value = key;
                }
            }else {
                map.put(key,1);
                if(map.size()==1){
                    max_value = key;
                }
                if(max_cnt  ==1){
                    max_value = Math.min(max_value, key);
                }
            }
        }
        System.out.println(max_value);

    }

}
// import java.io.BufferedReader;
// import java.io.InputStreamReader;
// import java.io.IOException;
// import java.util.HashMap;

// public class Q11652 {
//     public static void main(String[] args) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         int n = Integer.parseInt(br.readLine());
//         HashMap<Long, Integer> map = new HashMap<>(); //key에 숫자의 범위가 크기 때문에 long으로 지정 (int로 하면 런타임에러!)
//         int max = 1;
//         long maxKey = 0;

//         for (int i=0; i<n; i++) {
//             long key = Long.parseLong(br.readLine());
//             if (map.containsKey(key)) {
//                 map.put(key, map.get(key)+1); 
//                 if (max == map.get(key)) {
//                     maxKey = Math.min(maxKey, key);
//                 } else if (maxKey < map.get(key)){
//                     maxKey = key;
//                     max = map.get(key);
//                 }
//             } else {
//                 map.put(key, 1);

//                 if (map.size() == 1) {
//                     maxKey = key;
//                 }

//                 if (max == 1) {
//                     maxKey = Math.min(maxKey, key);
//                 }
                
//             }      
//         }
        
//         System.out.println(maxKey);
//     }
// }
