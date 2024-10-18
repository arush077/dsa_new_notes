count(*) means number of rows

//to find duplicate rows (u need to use GH (group by and having) )
select * from T 
group by email                      //grouping by email 
having count(email) > 1             //using the count(email) which will give count of the grouped emails