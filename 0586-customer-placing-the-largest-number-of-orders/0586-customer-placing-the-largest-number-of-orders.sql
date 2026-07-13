# Write your MySQL query statement below
SELECT customer_number
FROM Orders
GROUP BY customer_number
Order by COUNT(customer_number) DESC
LIMIT 1;
