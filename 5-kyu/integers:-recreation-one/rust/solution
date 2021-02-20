fn list_squared(m: u64, n: u64) -> Vec<(u64, u64)> {
    let mut l = vec![];
    for num in m..=n {
        let sum = factorize(num).iter().map(|x| x.pow(2)).sum::<u64>();
        if match sum & 0xF {
            0 | 1 | 4 | 9 => (sum as f64).sqrt() % 1.0 == 0.0,
            _ => false
        } {
            l.push((num, sum));
        }
    }
    l
}

fn factorize(num: u64) -> Vec<u64> {
    let mut l = vec![];
    for i in 1..=(num as f64).sqrt() as u64 {
        if num % i == 0 {
            l.push(i);
            if i != num/i {
                l.push(num/i);
            }            
        }
    }
    l
}