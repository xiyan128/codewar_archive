import java.util.stream.*;

class Meeting {
    
    public static String meeting(String s) {
      return Stream.of(s.split(";")).map( str -> {
        var splitted = str.toUpperCase().split(":");
        return "(" + splitted[1] + ", " + splitted[0] + ")";
      }).sorted().collect(Collectors.joining(""));
    }
}
