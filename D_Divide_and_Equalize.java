public class StringProduct {
    public static void main(String[] args) {
        String s1 = "abc";
        String s2 = "abcabcabc";

    
    }

    private static int stringProduct(String s1, String s2) {
        // If s1 is empty, then s2 must also be empty.
        if (s1.isEmpty()) {
            return 0;
        }

        // If s2 is empty, then s1 must be empty.
        if (s2.isEmpty()) {
            return 0;
        }

        // If s1 is longer than s2, then there is no N such that S1 N = S2.
        if (s1.length() > s2.length()) {
            return -1;
        }

        // Find the longest common prefix of s1 and s2.
        int lcp = 0;
        while (lcp < s1.length() && s1.charAt(lcp) == s2.charAt(lcp)) {
            lcp++;
        }

        // If the longest common prefix is equal to the length of s1, then s1 is a substring of s2.
        if (lcp == s1.length()) {
            return s2.length() / s1.length();
        }

        // Otherwise, there is no N such that S1 N = S2.
        return -1;
    }
}
