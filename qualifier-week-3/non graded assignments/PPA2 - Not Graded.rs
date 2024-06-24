fn main() {
    let mut principal: f64 = 0.0;
    let mut rate: f64 = 0.0;
    let mut time: f64 = 0.0;

    println!("Enter the principal amount: ");
    let _ = scanf!("{:f64}", &mut principal);

    println!("Enter the interest rate (in percentage): ");
    let _ = scanf!("{:f64}", &mut rate);

    println!("Enter the time period (in years): ");
    let _ = scanf!("{:f64}", &mut time);

    rate /= 100.0;

    let simple_interest = principal * rate * time;

    println!("Simple Interest: {:.2f}", simple_interest);
}
