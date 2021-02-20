fn revrot(s: &str, c: usize) -> String {
    if s.len() < c || s.len() == 0 || c == 0 { return "".into(); }
    
    let mut result = String::default();
    
    for arr in s.chars().collect::<Vec<_>>().chunks(c) {
        if arr.len() != c { continue; }
        if should_reverse(arr) {
            for c in arr.iter().rev() {
                result.push(*c);
            }
        } else {
            for c in arr.iter().skip(1) {
                result.push(*c);
            }
            result.push(*arr.first().unwrap());
        }
    }
    
    result
}

fn should_reverse(arr: &[char]) -> bool {
    let mut sum = 0;
    for i in 0..arr.len() {
        sum += arr[arr.len()-i-1].to_digit(10).unwrap().pow(3);
    }
    sum % 2 == 0
}