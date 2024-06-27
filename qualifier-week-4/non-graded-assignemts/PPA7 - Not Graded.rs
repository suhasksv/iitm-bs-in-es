fn main() {
    let mut purchase_amount = String::new();

    println!("Enter the total purchase amount: ");

    match std::io::stdin().read_line(&mut purchase_amount) {
        Ok(_) => {}
        Err(error) => {
            println!("Error reading input: {}", error);
            return;
        }
    }

    let purchase_amount = match purchase_amount.trim().parse::<f64>() {
        Ok(amount) => amount,
        Err(_) => {
            println!("Invalid input. Please enter a number.");
            return;
        }
    };

    let discount_rate = match purchase_amount {
        x if x < 200.0 => 0.0,
        x if x <= 500.0 => 0.1,
        _ => 0.2,
    };

    let final_amount = purchase_amount * (1.0 - discount_rate);

    println!("Final amount to pay: {:.2}", final_amount);
}