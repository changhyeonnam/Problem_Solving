# Write your MySQL query statement below
SELECT
    user_id, CONCAT(UPPER(LEFT(name,1)), LOWER(RIGHT(name,LENGTH(name)-1))) AS name
FROM USERS
ORDER BY user_id ASC
;

# second solution
# Write your MySQL query statement below
SELECT
    user_id, CONCAT(UPPER(SUBSTR(name,1,1)), LOWER(SUBSTR(name,2))) AS name
FROM USERS
ORDER BY user_id ASC
;
