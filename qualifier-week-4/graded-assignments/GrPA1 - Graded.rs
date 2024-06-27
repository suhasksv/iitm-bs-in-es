fn main() {
    let mut num: i32 = 0;
    let mut reversed: i32 = 0;
    let mut remainder: i32;

    match std::io::stdin().read_line(&mut String::new()) {
        Ok(_) => {}
        Err(error) => {
            println!("Error: Failure {}", error);
            return;
        }
    }

    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Error: Failure");

    match input.trim().parse::<i32>() {
        Ok(n) => num = n,
        Err(_) => {
            println!("Error: Failure");
            return;
        }
    }

    let mut original = num;

    while num != 0 {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if original == reversed {
        println!("{} is a palindrome", original);
    } else {
        println!("{} is not a palindrome", original)
    }
}
