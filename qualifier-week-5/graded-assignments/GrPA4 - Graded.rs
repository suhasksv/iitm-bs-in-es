fn is_prime(num: u32) -> u32 {
    if num <= 1 {
        return false;
    }
    for i in 2..(num as f64).sqrt() as u32 + 1 {
        if num % i == 0 {
            return false;
        }
    }
    true
}

fn prime_sum(p: u32, q: u32) -> u32 {
    if p > q {
        return 0;
    }

    let mut sum = 0;
    for i in p.. = q {
        if is_prime((i)) {
            sum += i
        }
    }
    sum
}

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    std::io::stdin().read_line(&mut input1).expect("Error: Failure");
    std::io::stdin().read_line(&mut input2).expect("Error: Failure");

    let input1: u32 = match input1.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            return;
        }
    };

    let input2: u32 = match input2.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            return;
        }
    };

    if input1 > input2 {
        return;
    }

    println!(prime_sum(input1, input2));
}
