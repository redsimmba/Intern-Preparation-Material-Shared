select BooksId as Id 
from BoughtBooks
Group by BooksId
having count(*)>=3;