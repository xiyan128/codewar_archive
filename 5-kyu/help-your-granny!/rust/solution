use std::collections::HashMap;

fn tour(frnds:  &[&str], fr_twns: HashMap<&str, &str>, dist: HashMap<&str, f64>) -> i32 {
    let mut town_list = vec![];
    let mut total_dist = 0.0;
    
    for f in frnds {
        if let Some(fr_twn) = fr_twns.get(f) {
            town_list.push(fr_twn);
        }
    }
    
    for arr in town_list.windows(2) {
          if let (Some(a), Some(b)) = (dist.get(arr[0]), dist.get(arr[1])) {
              total_dist += (b.powf(2.0) - a.powf(2.0)).sqrt();
          }
    };
    
    (total_dist + dist.get(town_list.first().unwrap().clone()).unwrap() + dist.get(town_list.last().unwrap().clone()).unwrap()) as i32
}