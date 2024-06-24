fn main() {
    let mut n: i32 = 0;
    let mut sum = 0;

    println!("Enter a positive integer: ");
    let _ = scand!("{:i}", &mut n);

    for i in 0..n {
        sum += 2 * i + 1;
    }
    println!("Sum of the Series: {}", sum);
}