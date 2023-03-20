select sqrt((max(XCoordinate)-min(XCoordinate))*(max(XCoordinate)-min(XCoordinate)) + (max(YCoordinate)-min(YCoordinate))*(max(YCoordinate)-min(YCoordinate))) as A
from HOUSES;