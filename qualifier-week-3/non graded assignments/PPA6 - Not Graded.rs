fn main() {
    let mut principal: f64 = 0.0;
    let mut annual_rate: f64 = 0.0;
    let mut num_months: i32 = 0;

    let _ = scanf!("{:f64}", &mut principal);
    let _ = scanf!("{:f64}", &mut annual_rate);
    let _ = scanf!("{:f64}", &mut num_months);

    let monthly_rate = annual_rate / 100;

    let monthly_payment = principal * monthly_rate * (1.0 + monthly_rate).powi(num_months as i32) / ((1.0 + monthly_rate).powi(num_months as i32) - 1.0);

    println!("Monthly Payment: {:.2f}", monthly_payment);
}
