use std::io;

fn main() {
    let mut total: f64 = 0.0;
    let mut input = String::new();

    loop {
        io::stdin().read_line(&mut input).expect("Failed to Read Input: Failure");
        let price: f64 = input.trim().parse().expect("Invalid input");

        total += price;

        input.clear();

        io::stdin().read_line(&mut input).expect("Failed to read line: Failure");
        let choice = input.trim();

        input.clear();

        if choice != "y" && choice != "Y" {
            break;
        }
    }

    println!("{:.2}", total);
}
