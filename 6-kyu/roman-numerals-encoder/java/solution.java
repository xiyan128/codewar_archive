import java.util.SortedMap;
import java.util.Map;
import java.util.Iterator;

public class Conversion {
    public static final int[] nums = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    public static final String[] names = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    public String solution(int n) {
      String result = "";
      for (int i = this.nums.length-1; i >= 0; i--) {
        while (n >= this.nums[i]) {
            result += this.names[i];
            n -= this.nums[i];
         }
      }
      return result;
    }
}