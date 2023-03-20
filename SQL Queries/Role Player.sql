select concat(Player,'(',substr(Role,1,1),')') as 'N'
from GAMERS
order by Player;