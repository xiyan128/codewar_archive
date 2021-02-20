import java.util.List;

class HowManyNumbers {
    public static List<Long> findAll(final int sumDigits, final int numDigits) {
        final long LOW = (long) Math.pow(10, numDigits - 1);
        final long HIGH = (long) Math.pow(10, numDigits) - 1;
        long min = HIGH;
        long max = LOW; 
        long count = 0;
        for (long i = HIGH; i >= LOW;) {
          long sumd = sumDigits(i);
          if (sumd == sumDigits) {
            if (i < min) min = i;
            if (i > max) max = i;
            count++;
            i--;
          } else if (sumd < 0 && -sumd < i) {
            i = -sumd-1;
          } else i--;
        }
        return count == 0 ? List.of() : List.of(count, min, max);
    }
  
    public static Long sumDigits(Long num) {
      long sum = 0L, tmp = num;
      int prev = 0, index = 0;
      while (num > 0) {
        prev = (int) (num % 10);
        sum += prev;
        num /= 10;
        index++;
        if (num % 10 > prev) return -tmp + tmp % ((long) Math.pow(10, index));
      }
      return sum;
    }
}