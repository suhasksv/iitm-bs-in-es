function is_prime(n)
    if n <= 1 then
        return false
    end
    for i = 2, math.sqrt(n) do
        if n % i == 0 then
            return false
        end
    end
    return true
end

function prime_sum(p, q)
    if p > q then
        return 0
    end

    local sum = 0
    for i = p, q do
        if is_prime(i) then
            sum = sum + i
        end
    end
    return sum
end

local input1 = tonumber(io.read())
local input2 = tonumber(io.read())

if not input1 or input1 <= 0 or not input2 or input2 < input1 then
    print("Error: Failure")
else
    print(prime_sum(input1, input2))
end
