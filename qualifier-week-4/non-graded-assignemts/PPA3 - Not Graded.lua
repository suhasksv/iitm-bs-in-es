function piece_function(x)
    if x > 0 and x < 10 then
        return x + 2
    elseif x >= 10 then
        return x * x + 2
    else
        return 0
    end
end

local x = io.read("*number")

print(float(piece_function(x)))
