function factorial(n)
    if n == 0 then
        return 1
    else
        return n * factorial(n-1)
    end
end

local n = io.read("*number")

if n < 0 then
    print("Error: Failure")
else
    local fact = factorial(n)
    print(fact)
end
