# Write your MySQL query statement below
Select(
SELECT DISTINCT Salary AS SecondHighestSalary
FROM Employee
ORDER BY Salary DESC
Limit 1 OFFSET 1
) AS SecondHighestSalary;
