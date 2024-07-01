bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int primeSum(int lowerLimit, int upperLimit) {
  if (lowerLimit > upperLimit) {
    return 0;
  }

  int sum = 0;
  for (int i = lowerLimit; i <= upperLimit; i++) {
    if (isPrime(i)) {
      sum += i;
    }
  }
  return sum;
}

void main() {
  int lowerLimit = int.parse(stdin.readLineSync()!);
  int upperLimit = int.parse(stdin.readLineSync()!);

  if (lowerLimit > upperLimit) {
    print("Error: Failure");
  } else {
    print(primeSum(lowerLimit, upperLimit));
  }
}
