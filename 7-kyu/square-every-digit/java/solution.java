public class SquareDigit {

  public int squareDigits(int n) {
    int result = 0;
    int digit = 0;
    while (n>0) {
      int sq = (n%10) * (n%10);
      if (sq != 0) {
        result += Math.pow(10, digit) * sq;
        digit = getNumDigits(result);
      } else {
        digit ++;
      }
      n /= 10;
    }
    return result;
  }
  
  public static int getNumDigits(int num) {
    int count = 0;
    while(num>=1) {
      num/=10;
      count++;
    }
    return count;
  }

}