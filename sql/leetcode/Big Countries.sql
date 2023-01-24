# Write your MySQL query statement below
SELECT
    name,
    population,
    area
FROM
    world
WHERE
        area>=3000000 or population>=25000000
;

# second solution
SELECT
    name,
    population,
    area
FROM
    world
WHERE
        area>=3000000
UNION
SELECT
    name,
    population,
    area
FROM
    world
WHERE
        population>=25000000
;
