fn product_fib(prod: u64) -> (u64, u64, bool) {
    let mut fib = (1, 1);
    while prod>fib.0*fib.1 {
        fib = (fib.1, fib.0 + fib.1);
    }
    (fib.0, fib.1, prod == fib.0 * fib.1)
}
