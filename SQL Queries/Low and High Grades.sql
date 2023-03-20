select COUNT(Name) 
from EMPLOYEE e INNER JOIN EVALUATION v
on e.Points between v.Lower and v.Upper 
where v.Rating<3;

select COUNT(Name) 
from EMPLOYEE e INNER JOIN EVALUATION v
on e.Points between v.Lower and v.Upper 
where v.Rating>8;