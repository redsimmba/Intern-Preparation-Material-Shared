select count(ID) as A
 from WORKERS where 
 DailyWage*DaysWorked =
 (select max(DailyWage*DaysWorked) from WORKERS);