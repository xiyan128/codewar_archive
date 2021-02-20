mod solution {
    
    pub fn range_extraction(a: &[i32]) -> String {
        let mut r = vec![];
        let (mut i, mut j) = (0, 0);
        while i < a.len()-2 {
            if a[i+1] - a[i] == 1 && a[i+2] - a[i+1] == 1 {
                j += 1;
            } else {
                if j>0 {
                    r.push(format!("{}-{}", a[i-j], a[i+1]));
                    i+=1;
                } else {
                    r.push(a[i].to_string());
                }
                j = 0;
            }
            i += 1;
        }
        if j != 0 { r.push(format!("{}-{}", a[i-j], a[i+1])) }
        else {
            r.push(a[i].to_string());
            if i == a.len()-2 {
                r.push(a[i+1].to_string());
            }
          }
        r.join(",")
    }
}