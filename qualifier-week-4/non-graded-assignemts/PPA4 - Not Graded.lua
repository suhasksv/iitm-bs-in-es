function meeting_happening(ids)
    for i = 1, #ids do
        local next_index = (i % #ids) +  1
        if (ids[i] + ids[next_index]) % 2 ~= 0 then
            return false
        end
    end
    return true
end

local employee_ids = {}
local line = io.read()

local split_ids = {}

for id in string.gmatch(line, "%S+") do
    table.insert(split_ids, tonumber(id))
end

employee_ids = split_ids

local meeting_status = meeting_happening(employee_ids)

if meeting_status then
    print("YES")
else
    print("NO")
end
