# Write your MySQL query statement below
SELECT c.customer_id
from Customer c Join Product p
ON c.product_key=p.product_key
GROUP BY c.customer_id
HAVING COUNT(DISTINCT c.product_key) = (SELECT COUNT(*) FROM Product)