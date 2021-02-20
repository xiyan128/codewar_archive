fn thirt(n: i64) -> i64{

    let mut cache = n;
    
    while cache != r_13(cache) {
        cache = r_13(cache);
    }
    
    cache
}

fn digits(n: i64) -> Vec<i64> {
    let (mut d, mut num) = (vec![], n.clone());
    while num>0 {
        d.push(num%10);
        num /= 10;
    }
    d
}

fn r_13(n: i64) -> i64 {
    let mut seq = vec![1, 10, 9, 12, 3, 4];
    let mut sum = 0;
    for x in digits(n) {
        sum += x * seq.first().unwrap();
        seq.rotate_left(1);
    }
    sum
}