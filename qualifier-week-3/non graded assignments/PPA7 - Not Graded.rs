use std::f64::consts::PI;

fn main() {
    let mut radius: f64 = 0.0;
    let mut height: f64 = 0.0;

    let _ = scanf!("{:f64}", &mut radius);
    let _ = scanf!("{:f64}", &mut height);

    println!("{:.2f}", PI * radius.powi(2) * height);
}
