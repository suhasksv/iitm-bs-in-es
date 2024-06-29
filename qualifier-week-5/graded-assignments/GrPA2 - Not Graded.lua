function GCD(a, b)
    while b ~= 0 do
    local temp = a
    b = a % b
    a = temp
    end
    return a
end

local a = io.read("*n")
local b = io.read("*n")

print(GCD(a, b))

-- Recussion
