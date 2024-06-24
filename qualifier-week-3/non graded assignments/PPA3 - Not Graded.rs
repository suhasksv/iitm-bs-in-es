fn main() {
    let mut radius: f64 = 0.0;

    println!("Enter the Radius of the Sphere: ");
    let _ = scanf!("{:f64}", &mut radius);

    let volume = (4.0 / 3.0) * std::f64::consts::PI * radius.pow(3.0);

    println!("Volume of the Sphere: {:.2f}", volume);
}
