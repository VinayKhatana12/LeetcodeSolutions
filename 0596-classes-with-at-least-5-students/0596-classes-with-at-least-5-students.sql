# Write your MySQL query statement 
SELECT class
FROM COURSES
GROUP BY class
HAVING COUNT(*)>=5;
