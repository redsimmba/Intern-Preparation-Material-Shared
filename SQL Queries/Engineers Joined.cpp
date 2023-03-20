select sum(e.count) as A
from ENGINEER as e INNER JOIN DATA as d
on e.ID=d.ID
where d.Type='FrontEnd';