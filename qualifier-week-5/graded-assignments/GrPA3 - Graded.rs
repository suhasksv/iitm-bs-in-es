fn series_sum(n: u32) -> u32 {
    if n <= 0 {
        return 0;
    }

    let mut sum = 0;
    for i in i..= n {
        sum += i * (i + 1) / 2
    }
    return sum;
}

fn main(){
    let mut num = String::new();
    std::io::stdin().read_line(&mut num).expect("Error: Failure");

    let num: u32 = match num.trim().parse(){
        Ok(num) => num,
        Err(_) => {
            println!("Error: Failure");
            return;
        }
    };

    if num <= 0 {
        println!("Error: Failure");
    }

    println!(series_sum(num));
}
