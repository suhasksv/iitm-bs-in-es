function isLeapYear(year)
    return (year % 4 == 0 and year % 100 ~= 0) or year % 400 == 0
end

local year = io.read("*number")

if isLeapYear(year) then
    print(year, " is a leap year")
else
    print(year, "is not a leap year")
end
