use std::io;

fn series_sum(n: i32) -> i32 {
    let mut sum = 0;
    for i in 1..=n {
        sum += (1..=i).sum::<i32>();
    }
    sum
}

fn main() {
    let mut input = String::new();

    // Input the number of terms
    println!("Enter the number of terms: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n: i32 = input.trim().parse().expect("Invalid input");

    // Calculate the sum of the series
    let sum = series_sum(n);

    // Print the result
    println!("{}", sum);
}
