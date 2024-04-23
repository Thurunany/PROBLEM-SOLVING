SELECT
    query_name as query_name,
    ROUND(AVG(rating::numeric/position), 2) as quality,
    ROUND(AVG(CASE WHEN rating < 3 THEN 1 ELSE 0 END) * 100.0, 2) AS poor_query_percentage
FROM queries
WHERE query_name is not null
GROUP BY query_name
