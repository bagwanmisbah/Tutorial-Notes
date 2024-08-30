create table dept
(
  dno int primary key,
  dname varchar(25)
);
create table emp
(
eno int primary key,
ename varchar(20),
dno int,
);
create table project
(
  pno int primary key,
  pname varchar(55),
  eno int,
  dno int
);

-- for departments 
-- let HR 5
-- let sales 10
-- let finances 15
-- let design 20
-- let chem (cook ) 25
-- let legal adv 30
--note design is a department having no employees 


insert into dept values(5,'HR')
insert into dept values(10,'SALES')
insert into dept values(15,'FINANCE')
insert into dept values(20,'DESIGN')
insert into dept values(25,'CHEMISTRY')
insert into dept values(30,'LEGAL ADVISORS')


insert into emp values(1,"Misbah",5);
insert into emp values(2,"Walter white",25);
insert into emp values(3,"Jesse Pinkman",10);
insert into emp values(4,"Skyler White",15);
insert into emp values(5,"Gustavo Fring",10);
insert into emp values(6,"Krazy 8",10);
insert into emp values(7,"Saul Goodman",30);
insert into emp values(8,"Kim Wexler",30);
insert into emp values(9,"Walter white jr",5);
insert into emp values(10,"Holly White",5);
insert into emp values(11,"Skinny Pete",10);
insert into emp values(12,"Gale Boetticher",25);
insert into emp values(13,"Tuco Salamanca",NULL);
insert into emp values(14,"Lalo Salamanca",NULL);


insert into project values(100,'cooking',2,25)
insert into project values(101,'managing finances',4,15)
insert into project values(102,'safekeeping funds in washing machine',2,15)
insert into project values(103,'exisitng and being cute',10,5)
insert into project values(104,'watching the greatest show of all times',1,5)
insert into project values(105,'lying for walter white',7,30)
insert into project values(106,'keeping walter white out of prison',7,30)
insert into project values(107,'fact is-walter white couldnt have done it without him',7,30)
insert into project values(108,'the chicken man',5,10)

select e.ename,d.dname,d.dno,e.dno 
from dept d INNER JOIN emp e
on d.dno=e.dno 
--both above and below return Inner Join to find employees and their departments:
SELECT e.ename,d.dname,d.dno,e.dno
FROM emp e
INNER JOIN dept d ON e.dno = d.dno;
-- Join to find employees and their departments:

ename                dname                     dno         dno        
-------------------- ------------------------- ----------- -----------
Misbah               HR                                  5           5
Walter white         CHEMISTRY                          25          25
Jesse Pinkman        SALES                              10          10
Skyler White         FINANCE                            15          15
Gustavo Fring        SALES                              10          10
Krazy 8              SALES                              10          10
Saul Goodman         LEGAL ADVISORS                     30          30
Kim Wexler           LEGAL ADVISORS                     30          30
Walter white jr      HR                                  5           5
Holly White          HR                                  5           5
Skinny Pete          SALES                              10          10
ename                dname                     dno         dno        
-------------------- ------------------------- ----------- -----------
Misbah               HR                                  5           5
Walter white         CHEMISTRY                          25          25
Jesse Pinkman        SALES                              10          10
Skyler White         FINANCE                            15          15
Gustavo Fring        SALES                              10          10
Krazy 8              SALES                              10          10
Saul Goodman         LEGAL ADVISORS                     30          30
Kim Wexler           LEGAL ADVISORS                     30          30
Walter white jr      HR                                  5           5
Holly White          HR                                  5           5
Skinny Pete          SALES                              10          10

--Left Join to find all departments and the employees in them
--(including departments with no employees):
select d.dname,e.ename,e.eno,d.dno
from dept d 
left join emp e on d.dno=e.dno;
--  this is where null values will be returned as in case of design department

-- LEFT JOIN is particularly useful when you want to make sure you get all records from the left table,
--   even if there is no corresponding record in the right table.

dname                     ename                eno         dno        
------------------------- -------------------- ----------- -----------
HR                        Misbah                         1           5
HR                        Walter white jr                9           5
HR                        Holly White                   10           5
SALES                     Jesse Pinkman                  3          10
SALES                     Gustavo Fring                  5          10
SALES                     Krazy 8                        6          10
SALES                     Skinny Pete                   11          10
FINANCE                   Skyler White                   4          15
DESIGN                    NULL                        NULL          20
CHEMISTRY                 Walter white                   2          25
LEGAL ADVISORS            Saul Goodman                   7          30
LEGAL ADVISORS            Kim Wexler                     8          30

--returns department having no employees
select d.dname,e.eno,d.dno
from dept d 
left join emp e on d.dno=e.dno
where e.dno is NULL

  dname                     eno         dno        
------------------------- ----------- -----------
DESIGN                           NULL          20


--returns employees belonging to no department 
select e.eno,e.ename,e.dno
from emp e
left join dept d on e.dno=d.dno
where d.dno is null

eno         ename                dno        
----------- -------------------- -----------
         13 Tuco Salamanca              NULL
         14 Lalo Salamanca              NULL

--three table join 
  
select e.ename,d.dname,p.pname
from emp e 
inner join dept d on e.dno=d.dno
inner join project p on d.dno=p.dno
order by p.pname


ename                dname                     pname                                                  
-------------------- ------------------------- -------------------------------------------------------
Walter white         CHEMISTRY                 cooking                                                
Gale Boetticher      CHEMISTRY                 cooking                                                
Misbah               HR                        exisitng and being cute                                
Walter white jr      HR                        exisitng and being cute                                
Holly White          HR                        exisitng and being cute                                
Saul Goodman         LEGAL ADVISORS            fact is-walter white couldnt have done it without him  
Kim Wexler           LEGAL ADVISORS            fact is-walter white couldnt have done it without him  
Saul Goodman         LEGAL ADVISORS            keeping walter white out of prison                     
Kim Wexler           LEGAL ADVISORS            keeping walter white out of prison                     
Saul Goodman         LEGAL ADVISORS            lying for walter white                                 
Kim Wexler           LEGAL ADVISORS            lying for walter white                                 
Skyler White         FINANCE                   managing finances                                      
Skyler White         FINANCE                   safekeeping funds in washing machine                   
Misbah               HR                        watching the greatest show of all times                
Walter white jr      HR                        watching the greatest show of all times                
Holly White          HR                        watching the greatest show of all times                


--to Count Employees in Each Department
SELECT 
    d.dname AS Department_Name, 
    COUNT(e.eno) AS Total_Employees
FROM 
    dept d
LEFT JOIN 
    emp e ON d.dno = e.dno
GROUP BY 
    d.dname;

Department_Name           Total_Employees
------------------------- ---------------
CHEMISTRY                               2
DESIGN                                  0
FINANCE                                 1
HR                                      3
LEGAL ADVISORS                          2
SALES                                   4








