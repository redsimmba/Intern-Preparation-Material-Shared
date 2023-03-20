select count(Id) as A 
from Students as s
where s.marks > (select avg(marks) from Students)
group by ClassId;
order by ClassId;