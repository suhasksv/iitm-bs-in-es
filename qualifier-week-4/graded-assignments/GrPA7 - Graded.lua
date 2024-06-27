local numDays = tonumber(io.read())

if numDays <= 0 then
    return
end

local totalCookies = 0

for _ = 1, numDays do
    local dailySales = tonumber(io.read())
    totalCookies = totalCookies + dailySales
end

print(totalCookies)
