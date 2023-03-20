select s.Name || ',' || j.Date as Offers
from Students s JOIN Departments d on s.DepartmentId=d.DepartmentId LEFT JOIN Jobs j on s.Id=j.Id
order by d.DepartmentName;