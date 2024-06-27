function calculateFinalAmount(purchaseAmount)
    local discountRate = 0

    if purchaseAmount < 200 then
        discountRate = 0
    elseif purchaseAmount <= 500 then
        discountRate = 0.1
    else
        discountRate = 0.2
    end

    local finalAmount = purchaseAmount * (1 - discountRate)

    return finalAmount
end

local purchaseAmount = tonumber(io.read())

if not purchaseAmount then
    print("Invalid input. Please enter a number.")
    return
end

local finalAmount = calculateFinalAmount(purchaseAmount)

print(string.format("%.2f", finalAmount))
