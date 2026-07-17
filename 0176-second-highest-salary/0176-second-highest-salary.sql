# Write your MySQL query statement below

select(
select distinct salary a
FROM Employee
Order by salary desc 
limit 1,1
) as SecondHighestSalary;