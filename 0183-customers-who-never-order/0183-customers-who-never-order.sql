# Write your MySQL query statement below

select name as  Customers
FROM Customers s LEFT JOIN Orders d on s.id=d.customerId
WHERE d.id is null