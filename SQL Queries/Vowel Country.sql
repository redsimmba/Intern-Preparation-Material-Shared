select distinct COUNT(Country)
from PLACES
where Country like '%a'
or Country like '%e'
or Country like '%i'
or Country like '%o'
or Country like '%u';
