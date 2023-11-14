input -> name
      -> weekly working hours 
      -> bonus rate per hour 
      -> base salary

opreation -> gross-salary
                -> (weekly working hours * bonus rate per hour ) + base salary
          -> net salary 
                -> pension rate = gross-salary * 0.05
                -> tax = gross-salary * 0.15
                -> net = (gross-salary) - (tax + pension rate)
          -> bonus payment
                -> weekly working hours * bonus rate per hour

output -> gross-salary
       -> net salary 
       -> bonus payment