class Solution {
    static String conRevstr(String S1, String S2) {
        String concatStr = S1.concat(S2);
        StringBuffer reverseStr = new StringBuffer(concatStr);
        return reverseStr.reverse().toString();
    }
}
