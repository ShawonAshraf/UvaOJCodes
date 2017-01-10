import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);

        Map<Character, Character> map = new HashMap<>();
        map.put('A', 'A');
        map.put('E', '3');
        map.put('H', 'H');
        map.put('I', 'I');
        map.put('J', 'L');
        map.put('L', 'J');
        map.put('M', 'M');
        map.put('O', 'O');
        map.put('S', '2');
        map.put('T', 'T');
        map.put('U', 'U');
        map.put('V', 'V');
        map.put('W', 'W');
        map.put('X', 'X');
        map.put('Y', 'Y');
        map.put('Z', '5');
        map.put('1', '1');
        map.put('2', 'S');
        map.put('3', 'E');
        map.put('5', 'Z');
        map.put('8', '8');



        while(in.hasNext()) {
            String s = in.nextLine();
            boolean isPal;
            boolean isM;

            isPal = isPalindrome(s);
            isM = isMirror(s, map);

            System.out.println("isPal = " + isPal + "   isM = " + isM);
        }
    }


    public static boolean isPalindrome(String s) {

        String r = new StringBuilder(s).reverse().toString();

        if(s.equals(r)) {
            return true;
        }
        else {
            return false;
        }

    }

    public static boolean isMirror(String s, Map<Character, Character> map) {

        int l = s.length();
        char[] cr = new char[l];

        for(int i = 0; i < l; i++) {

        }

        return false;
    }
}
