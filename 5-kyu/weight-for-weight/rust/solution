fn order_weight(s: &str) -> String {
    let mut cache = s.split_whitespace().collect::<Vec<&str>>();
    cache.sort();
    cache.sort_by(|a, b| sum_digits(a).partial_cmp(&sum_digits(b)).unwrap());
    cache.join(" ")
}

fn sum_digits(s: &str) -> u32 {
    s.chars().map(|c| c.to_digit(10).unwrap()).sum()
}