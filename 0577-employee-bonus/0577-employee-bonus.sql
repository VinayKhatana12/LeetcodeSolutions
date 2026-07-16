# Write your MySQL query statement belowselect
select e.name,b.bonus
from Employee e
left join Bonus b
ON e.empID = b.empId
where b.bonus<1000
OR b.bonus is NULL;
