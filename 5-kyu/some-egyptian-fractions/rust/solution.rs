fn decompose(num: u32, denom: u32) -> String {
    let mut ef = Vec::default();
    let (mut dr, mut nr) = (denom as f64, num as f64);
    
    if num >= denom {
        ef.push(format!("{}", num/denom));
        nr %= dr;
    }
    while nr != 0.0 {
        let x = (dr / nr).ceil() as f64;
        ef.push(format!("1/{:0}", x));
        nr = x * nr - dr;
        dr = dr * x;
      }
    ef.join(", ")
}

// fn decompose(num: u32, denom: u32) -> String {
//     let mut frac = num as f32 / denom as f32;
//     let mut l = Vec::default();
//     let cache = frac;
//     let mut c = 2.0;
//     if frac > 1.0 {
//         l.push(format!("{}", frac.trunc()));
//         frac -= frac.trunc();
//     }
//     while frac > 0.0 {
//         while frac - 1.0/c < 0.0 {
//             c += 1.0;
//         }
//         l.push(format!("1/{:0}", c));
//         frac -= 1.0/c;
//         c = (1.0 / (cache - frac)).ceil();
//     }
//     l.join(", ")
// }