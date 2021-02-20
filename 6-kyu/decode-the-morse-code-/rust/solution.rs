// Preloaded:
//
// struct MorseDecoder {
//     morse_code: HashMap<String, String>,
// }
//
// MorseDecoder::new() populates the morse_code map, e.g. ".-" -> "A".

impl MorseDecoder {

    fn decode_morse(&self, encoded: &str) -> String {
        let mut words = vec![];

        for word in encoded.split("   ") {
            let mut letters = vec![];

            for letter in word.split_whitespace() {
                letters.push(self.morse_code.get(letter).unwrap().clone());
            }

            if !letters.is_empty() { words.push(letters.concat()); }
        }

        words.join(" ")
    }
}