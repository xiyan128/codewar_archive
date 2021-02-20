public class PerfectPower {
  public static int[] isPerfectPower(int n) {
    int upperBound = (int)Math.sqrt(n);
    int tempN = n;
    int j = 0;
    for(int i = 2; i <= upperBound; i++) {
      while(tempN%i == 0 && tempN > 1) {
        tempN = tempN/i;
        j++;
      }
      if(tempN == 1) {return new int[] {i,j};}
      tempN = n;
      j = 0;
    }
    return null;
  }
}