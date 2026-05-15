# Write your MySQL query statement below
-- select *from Employee where salary>1000;
#select Employee.id,Employee.salary, Department where Employee e, Department d, d.id=e.id;
#select department, emplyee, salary from Employee left join Department where Employee.id=Department.id;
SELECT d.name AS Department, 
       e.name AS Employee, 
       e.salary AS Salary
FROM Employee e
JOIN Department d ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentId = e.departmentId
);
