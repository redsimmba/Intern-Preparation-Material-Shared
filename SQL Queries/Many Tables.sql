select sum(e.count) as A
from ENGINEER as e 
INNER JOIN DATA as d on e.ID=d.ID
group by d.Type
order by d.Type;