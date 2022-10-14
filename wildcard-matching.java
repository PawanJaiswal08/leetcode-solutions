public class WildcardMatching {

   * @param args
   * @throws Exception
   */
  public static void main(String[] args) throws Exception {
    System.out.println(new WildcardMatching().isMatch("abebd", "?be******e"));
  }

  public boolean isMatch(String s, String p) {
    int starIdx = -1;
    int starPosAtStr = -1;
    int j = 0;
    for (int i = 0, l = s.length(); i < l; ) {
      if (j < p.length()) {
        if (s.charAt(i) == p.charAt(j) || p.charAt(j) == '?') {
          i++;
          j++;
        } else if (p.charAt(j) == '*') {
          starIdx = j;
          starPosAtStr = i;
          j++; // increment only pattern index. This is because '*' can match also empty string.
        } else if (starIdx != -1) {
          i = ++starPosAtStr;
          j = starIdx + 1;
        } else return false;
      } else if (starIdx != -1) {
        i = ++starPosAtStr;
        j = starIdx + 1;
      } else return false;
    }
    while (j < p.length()) {
      if (p.charAt(j) == '*') {
        j++;
      } else break;
    }
    return j == p.length();
  }
}