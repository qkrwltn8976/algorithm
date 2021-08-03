package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q2884 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str, " ");

        int hour = Integer.parseInt(st.nextToken());
        int time = Integer.parseInt(st.nextToken());

        if (time < 45) {
            System.out.println(Integer.toString(hour == 0 ? 23 : hour-1) + " " + Integer.toString(60+time-45));
        } else {
            System.out.println(Integer.toString(hour) + " " + Integer.toString(time-45));
        }
    }
}
