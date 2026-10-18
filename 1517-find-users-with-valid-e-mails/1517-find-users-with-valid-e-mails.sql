# Write your MySQL query statement below
SELECT *
FROM Users
WHERE CAST(mail AS BINARY)
      REGEXP BINARY '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$';