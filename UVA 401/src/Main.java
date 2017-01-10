import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);

        Map<Character, Character> map = new HashMap<>();
        map.put('A', 'A');
        map.put('B', 'A');
        map.put('C', 'A');
        map.put('D', 'A');
        map.put('E', '3');
        map.put('F', '3');
        map.put('G', '3');
        map.put('H', 'H');
        map.put('I', 'I');
        map.put('J', 'L');
        map.put('K', 'L');
        map.put('L', 'J');
        map.put('M', 'M');
        map.put('N', 'M');
        map.put('O', 'O');
        map.put('P', 'O');
        map.put('Q', 'O');
        map.put('R', 'O');
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
        map.put('4', 'E');
        map.put('5', 'Z');
        map.put('6', 'Z');
        map.put('7', 'Z');
        map.put('8', '8');
        map.put('9', '8');



        while(in.hasNext()) {
            String s = in.nextLine();
            boolean isPal;
            boolean isM;

            isPal = isPalindrome(s);
            isM = isMirror(s, map);

            if(!isPal && !isM) System.out.println(s + " -- is not a palindrome.\n");
            else if(isPal && !isM) System.out.println(s + " -- is a regular palindrome.\n");
            else if(!isPal && isM) System.out.println(s + " -- is a mirrored string.\n");
            else System.out.println(s + " -- is a mirrored palindrome.\n");
        }

        in.close();
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
        String r = new StringBuilder(s).reverse().toString();

        for(int i = 0; i < l; i++) {
            char c = s.charAt(i);
            if(c == '0') continue;

            char rev = map.get(c);

            cr[i] = rev;
        }

        String m = new String(cr);

        if(r.equals(m)) {
            return true;
        }
        else {
            return false;
        }
    }
}
