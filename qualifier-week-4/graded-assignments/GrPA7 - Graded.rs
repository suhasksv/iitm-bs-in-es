use std::io::{self, Read};

fn main() {
    let mut num_days_str = String::new();
    io::stdin().read_to_string(&mut num_days_str).expect("Input Error: Failure");

    let num_days: u32 = match num_days_str.trim().parse() {
        Ok(days) => days,
        Err(_) => {
            return;
        }
    };

    if num_days <= 0 {
        return;
    }

    let mut total_cookies = 0;
    for day in 1..(num_days + 1) {
        let mut daily_sales_str = String::new();
        io::stdin().read_to_string(&mut daily_sales_str).expect("Input Error: Failure");

        let daily_sales: u32 = match daily_sales_str.trim().parse() {
            Ok(sales) => sales,
            Err(_) => {
                return;
            }
        };

        total_cookies += daily_sales;
    }

    println!(total_cookies);
}
