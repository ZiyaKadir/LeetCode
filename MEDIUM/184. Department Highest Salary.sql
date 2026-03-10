SELECT 
    dep.name AS Department, 
    emp.name AS Employee, 
    emp.salary AS Salary
FROM Employee AS emp
JOIN Department AS dep ON emp.departmentId = dep.id
JOIN (
    SELECT departmentId, MAX(salary) AS max_salary
    FROM Employee
    GROUP BY departmentId
) AS max_table ON emp.departmentId = max_table.departmentId AND emp.salary = max_table.max_salary