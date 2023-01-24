# Write your MySQL query statement below

SELECT
    Customers.name as Customers
FROM
    Customers
WHERE
        Customers.id not in(
        select customerId
        FROM Orders
    )
;

# second solution

SELECT
    Customers.name as Customers
FROM
    Customers
        LEFT JOIN Orders
                  ON Customers.Id = Orders.customerId
WHERE
    Orders.customerId IS NULL
;