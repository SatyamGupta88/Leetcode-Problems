# Write your MySQL query statement below
SELECT user_id,
CONCAT(
    UPPER(SUBSTRING(name,1,1)), #make first char as Capitalcase
    LOWER(SUBSTRING(name,2))) AS name #make rest char as lowercase
FROM Users
ORDER BY user_id