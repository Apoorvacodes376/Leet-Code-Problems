# Write your MySQL query statement below

-- select s.sale_id, s.price, s.year as Sales from Sales as s;
-- select p.product_name as Product from Product as p;


-- select firstName,lastName,city,state from Person left join Address on Person.personId=Address.PersonId;

select  Product.product_name, Sales.price, Sales.year from Sales left join Product on  Sales.product_id=Product.product_id;

-- SELECT product_name FROM Product JOIN year FROM Sales WHERE Product.product_id = Sales.product_id;
