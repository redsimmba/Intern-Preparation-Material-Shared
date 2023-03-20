select concat(Role,' ','Count is ',count(Role)) as 'COUNT'
from GAMERS
group by Role
order by count(Role);