SELECT MAX(num) as num FROM 
(SELECT num, COUNT(num) FROM MyNumbers GROUP BY num HAVING COUNT(num) < 2)
