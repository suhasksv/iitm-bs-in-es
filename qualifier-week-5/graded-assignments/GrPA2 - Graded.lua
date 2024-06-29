function GCD(a, b)
    while b ~= 0 do
        local temp = b
        b = a % b
        a = temp
    end
    return a
end

local a = io.read("*n")
local b = io.read("*n")

print(GCD(a, b))

-- Recussion
--[[
function gcd(a, b)
    if b == 0 then
        return a
    else
        gcd(b, a % b)
    end
end
]]--
