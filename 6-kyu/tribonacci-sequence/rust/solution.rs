fn tribonacci(signature: &[f64; 3], n: usize) -> Vec<f64> {
    let mut trib = (signature[0], signature[1], signature[2]);
    let mut trib_vec = vec![trib.0, trib.1, trib. 2];
    if n<3 {
        return trib_vec[..n].to_vec(); 
    } 
    for _ in 0..n-3 {
        trib = (trib.1, trib.2, trib.0+trib.1+trib.2);
        trib_vec.push(trib.2);
    }
    trib_vec
}