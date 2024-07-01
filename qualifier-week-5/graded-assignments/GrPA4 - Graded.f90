program PrimeSum
  implicit none
  integer :: p, q, result

  ! Get input from the user
  print *, 'Enter two positive integers (p < q):'
  read *, p, q

  ! Call the prime_sum function and store the result
  result = prime_sum(p, q)

  ! Print the result
  print *, 'Sum of prime numbers between', p, 'and', q, 'is:', result

contains

  ! Function to check if a number is prime
  logical function is_prime(n)
    implicit none
    integer, intent(in) :: n
    integer :: i

    if (n <= 1) then
      is_prime = .false.
    elseif (n == 2) then
      is_prime = .true.
    elseif (mod(n, 2) == 0) then
      is_prime = .false.
    else
      is_prime = .true.
      do i = 3, int(sqrt(real(n))), 2
        if (mod(n, i) == 0) then
          is_prime = .false.
          exit
        end if
      end do
    end if
  end function is_prime

  ! Function to calculate the sum of all prime numbers between p and q (inclusive)
  integer function prime_sum(p, q)
    implicit none
    integer, intent(in) :: p, q
    integer :: i

    prime_sum = 0
    do i = p, q
      if (is_prime(i)) then
        prime_sum = prime_sum + i
      end if
    end do
  end function prime_sum

end program PrimeSum
