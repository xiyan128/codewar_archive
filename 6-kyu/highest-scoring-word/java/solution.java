public class Kata {

  public static String high(String s) {
    int max = 0, temp = 0;
    String maxString = "";
    for (String ss: s.split(" ")) if ((temp = getScore(ss)) > max) { max = temp; maxString = ss; };
    return maxString;
  }
  
  public static int getScore(String s) {
    int score = 0;
    for(char c : s.toCharArray()) {
      score += c-'a' + 1;
    }
    return score;
  }

}