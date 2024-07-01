function rev_print(n)
    if n > 0 then
        local num = io.read("*n")
        rev_print(n - 1)
        print(num)
    end
end

local num_values = io.read("*n")

if num_values <= 0 then
    print("Error: Failure")
else
    rev_print(num_values)
end
