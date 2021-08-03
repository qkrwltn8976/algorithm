package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q10172 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        str = "|\\_/|" + "\n"
            + "|q p|   /}" + "\n"
            + "( 0 )\"\"\"\\" + "\n"
            + "|\"^\"`    |" + "\n"
            + "||_/=\\\\__|";
        System.out.println(str);
    }
}
