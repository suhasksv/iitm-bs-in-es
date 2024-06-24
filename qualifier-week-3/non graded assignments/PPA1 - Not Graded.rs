fn main() {
    let mut n: i32 = 0;

    // Get input from the user
    println!("Enter a number: ");
    let _ = scanf!("{:i}", &mut n);  // Mimics scanf behavior for consistency

    // Calculate the sum using the formula
    let sum = n * (n + 1) / 2;

    // Print the sum
    println!("The sum is: {}", sum);
}
