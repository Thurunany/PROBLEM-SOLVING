SELECT
    to_char(trans.trans_date, 'YYYY-MM') as month,
    trans.country,
    count(trans.id) trans_count,
    count(trans2.id) approved_count ,
    sum(trans.amount) as trans_total_amount,
    COALESCE(sum(trans2.amount), 0) as approved_total_amount
FROM TRANSACTIONS trans
LEFT JOIN (SELECT * FROM TRANSACTIONS WHERE state LIKE 'approved' and state is not null) trans2
ON trans.id = trans2.id
GROUP BY month, trans.country
