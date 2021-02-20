fn gap(g: i32, m: u64, n: u64) -> Option<(u64, u64)> {
    if let Some(ns) = (m..=n).filter(|n| is_prime(*n)).collect::<Vec<_>>().windows(2).find(|x| x[1] as i32 - x[0] as i32==g) {
        Some((ns[0], ns[1]))
    } else {
        None
    }
}

fn is_prime(x: u64) -> bool {
    match x {
        2 | 3 => return true,
        x if x % 6 != 1 && x % 6 != 5 => return false,
        _ => (),
    }
    let mut i = 5;
    while i <= (x as f64).sqrt() as u64 {
        if x % i == 0 || x % (i + 2) == 0 {
            return false;
        }
        i += 6;
    }
    true
}