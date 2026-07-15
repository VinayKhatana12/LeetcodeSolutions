SELECT E.unique_id,D.name
from EmployeeUNI E
RIGHT JOIN   Employees D
ON E.id = D.id;