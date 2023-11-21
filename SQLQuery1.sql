SELECT* FROM Usuario
UPDATE Usuario SET Codigo='R1111',Nombre='Juan',ApellidoPaterno='Perez',ApellidoMaterno='Quispe',Dni='71426464',NombreFoto='Cejo.jpg',Contraseña='esotilin' WHERE Codigo='R1111'
SELECT* FROM PedidoCambio

SELECT*FROM Emergencia where Fecha='19/11/2023'
SELECT*FROM Emergencia where Fecha like '%19%'
UPDATE Emergencia set Fecha='12/11/2023' where Fecha like '%19%'

select*from Emergencia where Fecha >= '12/11/2023'
  and Fecha < '17/11/2023'
