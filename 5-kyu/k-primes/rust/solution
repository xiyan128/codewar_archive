fn count_kprimes(k: i32, start: i32, nd: i32) -> Vec<i32> {
    (start..=nd).filter(|n| prime_factor_count(*n) == k).collect()
}

fn prime_factor_count(num: i32) -> i32 {
    let (mut c, mut p, mut n) = (0, 2, num.clone());
    while n>1 {
        while n % p == 0 {
             c += 1;
             n = n/p; 
        }
        p += 1;
    }
    if num == 2 || num == 3 { 1 } else { c }
}


fn puzzle(s: i32) -> i32 {
    let one = count_kprimes(1, 1, s);
    let three = count_kprimes(3, 1, s);
    let seven = count_kprimes(7, 1, s);
    let mut result = 0;
    for one in one.iter() {
        for three in three.iter() {
            for seven in seven.iter() {
                if one + three + seven == s { result += 1; }
            }
        }
    }
    result
}

// fn puzzle(s: i32) -> i32 {
//     let mut count = 0;
//     for c in count_kprimes(7, 1, s) {
//         for b in count_kprimes(3, 1, s) {
//             for a in count_kprimes(1, 1, s) {
//                 if a + b + c == s {
//                     count += 1;
//                 }
//             }
//         }
//     }
//     count
// }