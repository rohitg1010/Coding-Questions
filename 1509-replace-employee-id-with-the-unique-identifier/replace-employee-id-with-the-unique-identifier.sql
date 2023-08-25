# Write your MySQL query statement below
select unique_id,name
from Employees e LEFT JOIN EmployeeUNI e_uni
ON e.id = e_uni.id;
