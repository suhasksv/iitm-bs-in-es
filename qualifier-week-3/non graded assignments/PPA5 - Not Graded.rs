fn main() {
    let mut a: i32 = 0;
    let mut b: i32 = 0;

    println!("Enter two integers: ");
    let _ = scanf!("{:i} {:i}", &mut a, &mut b);

    let (mut a, mut b) = (b, a);

    println!("Swapped values: {} {}", a, b);
}
