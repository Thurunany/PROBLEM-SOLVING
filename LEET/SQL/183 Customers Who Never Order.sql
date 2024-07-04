SELECT name AS Customers 
FROM Customers cu 
LEFT JOIN Orders o1
ON cu.id = o1.customerId
WHERE o1.customerId IS NULL
