public class MorseCodeDecoder {
    public static String decode(String morseCode) {
      String result = "";
      for(String word : morseCode.trim().split("   ")) {
        for(String letter : word.split("\\s+")) {
          result += MorseCode.get(letter);
        }
        result += ' ';
      }
      return result.trim();
    }
}