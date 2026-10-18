# Write your MySQL query statement below
SELECT
    visited_on,
    amount,
    ROUND(amount / 7, 2) AS average_amount
FROM (
    SELECT
        visited_on,
        SUM(amount) OVER (
            ORDER BY visited_on
            RANGE BETWEEN INTERVAL 6 DAY PRECEDING
                      AND CURRENT ROW
        ) AS amount,
        MIN(visited_on) OVER () AS first_day
    FROM Customer
) c
WHERE DATEDIFF(visited_on, first_day) >= 6
GROUP BY visited_on, amount
ORDER BY visited_on;