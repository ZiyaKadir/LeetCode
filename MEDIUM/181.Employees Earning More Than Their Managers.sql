SELECT e.name AS Employee
FROM Employee AS e
JOIN Employee AS emp ON e.managerId = emp.id
WHERE e.salary > emp.salary