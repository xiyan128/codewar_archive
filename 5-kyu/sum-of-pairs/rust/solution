use std::collections::HashMap;

fn sum_pairs(ints: &[i8], s: i8) -> Option<(i8, i8)> {
    let mut hm: HashMap<i8, i8> = HashMap::default();
    for i in ints {
        if let Some(x) = hm.get(&i) {
            return Some((*x, s-x));
        }
        hm.insert(s-i, *i);
    }
    None
}