function compound_interest(P, r, n, t)
    local A = P * (1 + r / n) ^ (n * t)
    return A
end

local P = tonumber(io.read())
local r = tonumber(io.read())

r = r / 100.0

local t = tonumber(io.read())
local n = tonumber(io.read())

for i = 1, t do
    local A = compound_interest(P, r, n, i)
    print(string.format("%2f", A))
end
