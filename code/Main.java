import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = null;
        s = in.nextLine();//이후에 s에 받아준다
        s = s.trim();
        int count = 1;
        for(int i =0; i<s.length();i++) {
            if(s.length()>0) {//아무 단어도 들어와 있지 않은 경우를 제외함
                if(s.charAt(i) == ' ' ) {//띄어쓰기 기준으로 단어를 셈
                    count++;
                }
            }
        }
        if(s.length()>0)
            System.out.println(count);
        else
            System.out.println(0);
    }
}