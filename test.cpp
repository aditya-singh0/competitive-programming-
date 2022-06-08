package introduction;
import java.io.*;
import java.math.*;
import java.util.*;

class Main
{

public
   static void main(String args[])
   {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      while (t-- > 0)
      {
         int n = sc.nextInt();
         char arr[] = sc.next().toCharArray();
         Stack<Long> st = new Stack<>();
         int i = 0;
         while (i < n)
         {
            if (arr[i] == '*')
            {
               long last = st.pop();
               int next = arr[i + 1] - '0';
               st.push(last * next);
               i++;
            }
            else if (arr[i] != '+')
            {
               st.push((long)(arr[i] - '0'));
            }
            i++;
         }
         long ans = 0;
         while (!st.isEmpty())
            ans += st.pop();
         System.out.println(ans);
      }
   }
}