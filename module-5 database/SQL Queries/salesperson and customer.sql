USE sql_queries;
CREATE TABLE salesperson 
(PK_sno INT PRIMARY KEY,
 sname VARCHAR(100),
 city VARCHAR(100),
 comm VARCHAR(10));

INSERT INTO salesperson (PK_sno, sname, city, comm) VALUES
(1001, 'Peel', 'London', '.12'),
(1002, 'Serres', 'San Jose', '.13'),
(1004, 'Motika', 'London', '.11'),
(1007, 'Rafkin', 'Barcelona', '.15'),
(1003, 'Axelrod', 'New York', '.1');

SELECT * FROM salesperson;

CREATE TABLE customer 
(PK_cnm INT PRIMARY KEY,
    cname VARCHAR(100),
    city VARCHAR(50) NOT NULL,
    rating INT,
    FK_sno INT,
    FOREIGN KEY (FK_sno) REFERENCES salesperson(PK_sno));

INSERT INTO customer (PK_cnm, cname, city, rating, FK_sno) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 100, 1003),
(203, 'Liu', 'San Jose', 100, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 100, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

SELECT * FROM customer;

select * from Customer
where FK_sno>1000;

select * from Salesperson
where comm >= .12  and city = "London"; 

select * from Salesperson
where city="Barcelona" or city="London";

select * from Salesperson
where comm between 0.10 and 0.12;

select * from Customer 
where rating<=100 and city="Roe";





