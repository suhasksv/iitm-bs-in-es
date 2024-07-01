void revPrint(int n) {
  if (n > 0) {
    int num = int.parse(stdin.readLineSync()!);
    revPrint(n - 1);
    print(num);
  }
}

void main() {
  int numValues = int.parse(stdin.readLineSync()!);

  if (numValues <= 0) {
    print("Error: Failure\n");
    return;
  }
  revPrint(numValues);
}
