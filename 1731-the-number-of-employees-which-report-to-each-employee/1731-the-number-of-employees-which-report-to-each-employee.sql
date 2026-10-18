# Write your MySQL query statement below
SELECT
    e.reports_to AS employee_id,
    m.name,
    COUNT(*) AS reports_count,
    ROUND(AVG(e.age)) AS average_age
FROM Employees e
JOIN Employees m
    ON e.reports_to = m.employee_id
GROUP BY e.reports_to, m.name
ORDER BY employee_id;