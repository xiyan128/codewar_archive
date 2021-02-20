import java.util.Map;
import java.util.HashMap;
import java.util.Collections;

public class CountingDuplicates {
  public static int duplicateCount(String text) {
    Map<Character, Integer> count = new HashMap<Character, Integer>();
    for (char c : text.toCharArray()) {
       c = Character.toUpperCase(c);
      if (count.containsKey(c)) {
        count.compute(c, (k, v) -> v+1);
      } else {
        count.put(c, 1);
      }
    }
    int res = 0;
    for (int i : count.values()) if (i > 1 ) res++;
    System.out.println(count);
    return res;
  }
}