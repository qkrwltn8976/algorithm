package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q3029 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String fromTime = br.readLine();
        String toTime = br.readLine();
        int[] from = new int[3];
        StringTokenizer st = new StringTokenizer(fromTime, ":");
        for (int i=0; i<3; i++) {
            from[i] = Integer.parseInt(st.nextToken());
        }
        int[] to = new int[3];
        st = new StringTokenizer(toTime, ":");
        for (int i=0; i<3; i++) {
            to[i] = Integer.parseInt(st.nextToken());
        }

        if (fromTime.equals(toTime)) {
            System.out.printf("%02d:%02d:%02d", 24, 0, 0);
        } else {
            int[] result = new int[3];
        
            if (to[2] - from[2] < 0) {
                result[2] = to[2] - from[2] + 60;
                to[1] -= 1;
            } else {
                result[2] = to[2] - from[2];
            }
    
            if (to[1] - from[1] < 0) {
                result[1] = to[1] - from[1] + 60;
                to[0] -= 1;
            } else {
                result[1] = to[1] - from[1];
            }
    
    
            if (to[0] - from[0] < 0) {
                result[0] = to[0] - from[0] + 24;
            } else {
                result[0] = to[0] - from[0];
            }
    
            System.out.printf("%02d:%02d:%02d", result[0], result[1], result[2]);
        } 
    }
}
