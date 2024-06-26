--- Not Working

function is_coprime(n1, n2)
    if n1 <= 2 or n2 <= 2 then
        return n1 ~= n2
    end

    while n2 ~= 0 do
        local remainder = n1 % n2
        n1 = n2
        n2 = remainder
    end

    return n1 == 1
end

local line = io.read()

if not string.match(line, "%S+ %S+") then
    print("Error: Failure")
    return
end

local success1, n1 = tonumber(n1)
local success2, n2 = tonumber(n2)

if not success1 or not success2 then
    print("Error: Failure")
    return
end

if is_coprime(n1, n2) then
    print("Coprime")
else
    print("Not Coprime")
end