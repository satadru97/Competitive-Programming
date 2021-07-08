public class PowerJump { 
    public static int powerOfJump(String s) 
    { 
        int c = 1; 
        int max = 1; 
        char ch = s.charAt(s.length() - 1); 
        for (int i = 0; i < s.length(); i++) { 
            if (s.charAt(i) == ch) { 
                if (c > max) { 
                    max = c; 
                } 
                c = 1; 
            } 
            else
                c++;
        } 
        return max; 
    } 
    public static void main(String[] args) 
    { 
        String s = "10101001"; 
        System.out.println(powerOfJump(s)); 
    } 
} 