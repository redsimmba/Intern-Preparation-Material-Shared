select l1.Name as Labourer1,l2.Name as Labourer2, l1.Country as Country
from LABOURERS l1 join LABOURERS l2
on l1.Country = l2.Country
where l1.Name<>l2.Name
order by l1.Name, l2.Name, l1.Country;