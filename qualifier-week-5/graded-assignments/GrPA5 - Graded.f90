program ReversePrint
    implicit none
    integer :: numValues, i
    integer, allocatable :: values(:)

    ! Prompt the user for the number of integers
    print *, "Enter the number of integers: "
    read *, numValues

    ! Check if the number of integers is positive
    if (numValues <= 0) then
        print *, "Error! Please enter a positive number of integers."
        stop
    endif

    ! Allocate array to store the integers
    allocate(values(numValues))

    ! Prompt the user to enter the integers
    print *, "Enter the integers:"
    do i = 1, numValues
        read *, values(i)
    end do

    ! Print the integers in reverse order
    call revPrint(values, numValues)

contains

    ! Subroutine to print the integers in reverse order
    subroutine revPrint(arr, n)
        implicit none
        integer, intent(in) :: arr(:)
        integer, intent(in) :: n
        integer :: i

        do i = n, 1, -1
            print *, arr(i)
        end do
    end subroutine revPrint

end program ReversePrint
