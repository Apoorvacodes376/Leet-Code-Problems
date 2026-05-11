# Write your MySQL query statement below

#update table Salary where sex='m' then sex='f';
#select * from Salary;

update Salary set sex= case sex
    when 'm' then 'f'
    else 'm'
end;
