function reversedNumber(num)
    local reversed = 0

    while num ~= 0 do
        local remainder = num % 10
        reversed = reversed * 10 + remainder
        num = math.floor(num / 10)
    end
    return reversed
end

local num = tonumber(io.read())

if not num then
    print("Invalid Input: Failure")
    return
end

local original = num


if original == tonumber(reversedNumber(num)) then
    print(original, "is a palindrome number")
else
    print(original, "is not a palindrome number")
end
