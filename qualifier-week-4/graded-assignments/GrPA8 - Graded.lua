local total = 0.0

while true do
    io.write("Enter the price of the item: ")
    local price = tonumber(io.read())

    total = total + price

    io.write("Do you want to add another item? (y/n): ")
    local choice = io.read()

    if choice ~= 'y' and choice ~= 'Y' then
        break
    end
end

print(string.format("Total cost: %.2f", total))
