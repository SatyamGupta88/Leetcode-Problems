SELECT max(salary) AS SecondHighestSalary from Employee
WHERE salary <(SELECT max(salary) from Employee)