import java.util.Scanner;
public class Reverse_a_words{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in)  ;
        String str =sc.nextLine();

        String[] words = str.split( " ");

        String[] stack = new String[ words.length];

        int top=-1;

        for (int i = 0 ; i < words.length ; i++ ){
            stack[++top] =words[i];
        }

        while (top >= 0){
            System.out.print( stack[top--]);
            if (top >= 0)
                 System.out.print(" ");
        }
        sc.close();
    }
}