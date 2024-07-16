
SELECT name FROM SalesPerson WHERE sales_id NOT IN (
SELECT sp.sales_id FROM SalesPerson sp 
NATURAL JOIN Orders od
JOIN Company cp ON od.com_id = cp.com_id
WHERE cp.name LIKE 'RED')

