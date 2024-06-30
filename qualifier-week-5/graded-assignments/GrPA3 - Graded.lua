function series_sum(n)
    if n <= 0 then
        return 0;
    end

    local sum = 0
    for i = 1, n do
        sum = sum + ((i * (i + 1)) / 2)
    end

    return sum;
end

local num = tonumber(io.read())

if not num or num <= 0 then
    print("Error: Failure")
else
    print(series_sum(num))
end
