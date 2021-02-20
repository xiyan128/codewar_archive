fn persistence(mut num: u64) -> u64 {
    let mut count = 0;
    while num % 10 != num {
        let mut temp = num;
        let mut prod = 1;
        while temp != 0 {
            prod *= temp % 10;
            temp /= 10;
        }
        num = prod;
        count += 1;
    }
    count
}