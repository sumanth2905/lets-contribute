def armstrong(n):
    number = str(n)
    n = len(number)
    output = 0
    for i in number:
      output = output+int(i)**n
    if output == int(number):
        return(True)
    else:
          return(False)
         
print(armstrong(153))
print(armstrong(120))
