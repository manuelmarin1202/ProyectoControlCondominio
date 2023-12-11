SELECT* FROM Usuario
select*from Administrador
select*from Edificio
select*from Piso
select*from Proyecto
select*from T_Entrenador
select*from T_sesionentrenamiento
select*from T_incidente
SELECT*FROM Guardias

SELECT * FROM sys.tables
UPDATE Usuario SET Codigo='R1111',Nombre='Juan',ApellidoPaterno='Perez',ApellidoMaterno='Quispe',Dni='71426464',NombreFoto='Cejo.jpg',Contraseña='esotilin' WHERE Codigo='R1111'
SELECT* FROM PedidoCambio
/*ctrl+shift+r*/
SELECT*FROM Emergencia where Fecha='19/11/2023'
SELECT*FROM Emergencia where Fecha like '%19%'
delete from Emergencia where Codigo=11
select*from Emergencia where SUBSTRING('12/11/2023',4,2)<=SUBSTRING(fecha, 4, 2) and SUBSTRING(fecha, 4, 2)<=SUBSTRING('23/11/2023',4,2)

select c.*,p.* from T_Reclamo C, T_Cliente P where SUBSTRING(c.fecha, 4, 2) = '03' and SUBSTRING(c.fecha, 7, 4)='2022' and c.codigoCliente=p.codigo
UPDATE Emergencia set Fecha='12/11/2023' where Fecha like '%19%'
select*from RT_Edificio
select*from RT_Cronograma
delete from RT_Cronograma where codigoProyecto=3
insert into RT_Cronograma(fechaInicio,fechaFin,estado,codigoProyecto)values('20/10/2022','20/10/2023','Finalizado',3)
select*from RT_Proyecto

select*from Emergencia where Fecha >= '12/11/2023'
  and Fecha < '20/11/2023'

 SELECT TOP 10 fecha
FROM Emergencia
select c.*,p.* from Edificio C,Proyecto P where C.CantidadPisos =7 and c.CodigoProyecto=p.Codigo
select*from T_SesionEntrenamiento
select*from T_LugarEntrenamiento
select*from T_Incidente
select*from T_Entrenador
select*from T_Reclamo
select*from T_Cliente

select c.*,p.*,m.* from T_SesionEntrenamiento C, T_Entrenador P, T_LugarEntrenamiento M where C.fecha='2/03/2022' and p.dni='12345678' and C.codigoEntrenador=p.codigo 
and c.codigoLugar=m.codigo
select*from T_Incidente where codigo=4
select*from T_Reclamo where SUBSTRING(fecha, 1, 2) >= '01'
  and fecha <= '31/01/2022'
select*from T_Reclamo where SUBSTRING(fecha, 4, 2) = '02' and SUBSTRING(fecha, 7, 4)='2022'
SELECT SUBSTRING('31/01/2022', 7, 4) AS Resultado



