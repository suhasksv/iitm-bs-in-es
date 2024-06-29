use std::io;

fn main() {
    let mut input1 = String::new();
    io::stdin().read_line(&mut input1).expect("Error: Failure");
    let a: i32 = input1.trim().parse().expect("Error Input!: Failure");

    let mut input2 = String::new();
    io::stdin().read_line(&mut input2).expect("Error: Failure");
    let a: i32 = input2.trim().parse().expect("Error Input!: Failure");

    println!(gcd(input1, input2));
}

fn gcd(mut a: i32, mut b: i32) -> i32 {
    while b != 0 {
        let temp = a;
        b = a % b;
        a = temp;
    }
    return a;
}