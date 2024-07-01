use std::io::{self, Read};

fn rev_print(n: u32) -> Result<(), std::io::Error> {
    if n > 0 {
        let mut buffer = String::new();
        io::stdin().read_to_string(&mut buffer)?; // Read a line into a string
        let num = buffer.trim().parse::<u32>()?; // Convert trimmed string to integer

        rev_print(n - 1)?; // Recursive call to print remaining numbers
        println!("{}", num);  // Print the current number after recursive calls
    }
    Ok(())
}

fn main() -> Result<(), std::io::Error> {
    let mut num_values_str = String::new();
    println!("Enter the number of integers: ");
    io::stdin().read_line(&mut num_values_str)?;

    let num_values = num_values_str.trim().parse::<u32>()?;

    if num_values <= 0 {
        println!("Error! Please enter a positive number of integers.");
        return Ok(()); // Exit program on invalid input
    }

    println!("Enter the integers:");
    rev_print(num_values)?;

    Ok(())
}
