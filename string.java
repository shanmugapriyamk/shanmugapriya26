import java.util.regex.Matcher; 
import java.util.regex.Pattern; 
class GFG  
{ 
public static void main (String[] args) 
{ 
String input1 = "abc"; 
String input2 = "1234"; 
String regex = "[+-]?[0-9][0-9]*";
Pattern p = Pattern.compile(regex); 
Matcher m = p.matcher(input1); 
if(m.find() && m.group().equals(input1)) 
   System.out.println(input1 + " is a valid integer number"); 
else
   System.out.println(input1 + " is not a valid integer number"
   m = p.matcher(input2); 
if(m.find() && m.group().equals(input2)) 
   System.out.println(input2 + " is a valid integer number");     
else
   System.out.println(input2 + " is not a valid integer number"); 
} 
}
