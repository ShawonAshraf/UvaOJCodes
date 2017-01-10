import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);

        while(in.hasNext()) {
            int t = in.nextInt();
            if(t >= 15) break;

            for(int i = 0; i < t; i++) {
                int a = in.nextInt();
                int b = in.nextInt();


                if(a > b) System.out.println(">");
                else if(a < b) System.out.println("<");
                else System.out.println("=");
            }
        }

        in.close();
    }
}
