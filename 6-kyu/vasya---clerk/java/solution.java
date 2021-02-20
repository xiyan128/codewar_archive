public class Line {
  public static String Tickets(int[] peopleInLine) {
    int d25 = 0;
    int d50 = 0;
    for (int i: peopleInLine) {
      switch (i) {
        case 25: d25++;
          break;
        case 50:
          if (d25 >= 1) {
            d25 -= 1;
            d50++;
          }
          else return "NO";
        break;
        case 100:
          if (d50 > 0 && d25>0) {
            d50--;
            d25--;
          } else if (d25>=3) d25 -= 3;
          else return "NO";
        break;
      }
    }
    return "YES";
  }
}