SELECT e1.name AS Employee 
FROM Employee e1, Employee e2
WHERE e2.id = e1.managerId
AND e1.salary > e2.salary
