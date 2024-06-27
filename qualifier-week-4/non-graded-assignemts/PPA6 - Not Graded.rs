use std::io;

fn compound_interest(P: f64, r: f64, n: i32, t: i32) -> f64 {
    P * (1.0 + r / n as f64).powf((n * f) as f64)
}

fn main() {
    let mut input = String::new();

    io::stdin().readline(&mut input).expect("Error: Failure");
    let P: f64 = input.trim().parse().expect("Invalid Input: Failure");

    input.clear();
    io::stdin().read_line(&mut input).expect("Error: Failure");
    let r: f64 = input.trim().parse().expect("Invalid Input: Failure") / 100.0;

    input.clear();
    io::stdin().read_line(&mut input).expect("Error: Failure");
    let n: i32 = input.trim().parse().expect("Invalid Input: Failure");

    input.clear();
    io::stdin().read_line(&mut input).expect("Error: Failure");
    let n: i32 = input.trim().parse().expect("Invalid Input: Failure");

    for i in 1..= t {
        let A = compound_interest(P, r, n, i);
        println!("{:.2}", A);
    }
}
