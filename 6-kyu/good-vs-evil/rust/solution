fn good_vs_evil(good: &str, evil: &str) -> String {
    let mut good_sum = 0;
    let mut evil_sum = 0;
    for (index, item) in good.split(" ").enumerate() {
        good_sum += item.parse::<u32>().unwrap() * match index {
            0 => 1,
            1 => 2,
            2 => 3,
            3 => 3,
            4 => 4,
            5 => 10,
            _ => 0
        };
    }
    for (index, item) in evil.split(" ").enumerate() {
        evil_sum += item.parse::<u32>().unwrap() * match index {
            0 => 1,
            1 => 2,
            2 => 2,
            3 => 2,
            4 => 3,
            5 => 5,
            6 => 10,
            _ => 0
        };
    }
    if good_sum > evil_sum {
        String::from("Battle Result: Good triumphs over Evil")
    } else if good_sum < evil_sum {
        String::from("Battle Result: Evil eradicates all trace of Good")
    } else {
        String::from("Battle Result: No victor on this battle field")  
    }
}