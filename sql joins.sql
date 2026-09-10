select top(1) * from Sales.SalesOrderDetail
select top(1) * from Sales.SalesOrderHeader
select top(1) * from Production.Product

select p.Name, so.OrderQty, soh.SalesOrderID from Sales.SalesOrderHeader soh
inner join Sales.SalesOrderDetail so
 on soh.SalesOrderID = so.SalesOrderID
inner join Production.Product p
 on p.ProductID = so.ProductID

--Quick Rule of Thumb for Development
--INNER JOIN: Use when the relationship is 1-to-1 or Required (e.g., Every OrderDetail must have a Product).
--LEFT JOIN: Use when the relationship is Optional (e.g., A Product might have a Subcategory, a User might have a Profile Picture).

  -- LEFT JOIN (The Optional Match)
--   Use this when you want all records from the first (left) table, and the matching records from the second (right) table.
  -- If there is no match, the database fills the right-side columns with NULL.

select p.ProductID,
       p.ListPrice,
       psc.Name
       from Production.Product p
       left join Production.ProductSubcategory psc
       on psc.ProductSubcategoryID = p.ProductSubcategoryID;

select p.ProductID,
       p.ListPrice,
       psc.Name
       from Production.Product p
       inner join Production.ProductSubcategory psc
       on psc.ProductSubcategoryID = p.ProductSubcategoryID

select * from Production.Product


select e.BusinessEntityID, 
       e.HireDate, 
       p.FirstName, 
       p.LastName 
from HumanResources.Employee e
inner join Person.Person p
on p.BusinessEntityID = e.BusinessEntityID

--INNER JOINs act as a filter. Because Employee has 290 rows and Person has almost 20,000 rows, 
--this query will exactly return 290 rows. It filters out all the people who are just customers
--or vendors, returning only those who are also employees.
--INNER JOIN (The Strict Match)
--Use this when you only want records that exist in both tables. If a record on either side is missing the matching key, the entire row is dropped from the result.
