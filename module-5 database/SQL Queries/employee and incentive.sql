use sql_queries;
create table employee1
(employee_id int,
first_name text,
last_name text,
salary int,
joining_date date,
department text);

create table view_table
(employee_id int,
first_name text,
last_name text,
salary int,
joining_date date,
department text);

delimiter $$
create trigger employee2
after insert on employee1
for each row
insert * into view_table
delimiter $$;

insert into employee1 values
('1',"Jhon","Abraham","1000000","13-01-01","Banking"),
('2',"Michael","Clarke","800000","13-01-01","Insurance"),
('3',"Roy","Thomas","700000","13-02-01","Banking"),
('4',"Tom","Jose","600000","13-02-01","Insurance"),
('5',"Jerry","Pinto","650000","13-02-01","Insurance"),
('6',"Philip","Mathew","750000","13-01-01","Services"),
('7',"Darshan","Mandaliya","650000","13-01-01","Services"),
('8',"Dhaval","Achhada","600000","13-02-01","Insurance");
select * from employee1;

create table incentive
(employee_ref_id int,
incentive_date date,
incentive_amount int);

insert into incentive values
('1',"13-02-01","5000"),
('2',"13-02-01","5000"),
('3',"13-02-01","5000"),
('1',"13-01-01","5000"),
('2',"13-01-01","5000");

select * from employee1;

select first_name from employee1 where first_name = 'Tom';

select first_name, salary, joining_date from employee1;

select * from employee1 order by First_Name asc, Salary desc;

select * from employee1 where first_name like 'J%';

select department, MAX(Salary) as Max_Salary from employee1 group by department order by Max_Salary asc;

select first_name, incentive_amount from employee1 inner join incentive on employee_id = employee_ref_id where incentive_amount > 3000;

select * from view_table;