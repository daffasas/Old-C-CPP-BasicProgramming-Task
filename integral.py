# Luas bawah kurva dari kurva f(x)= x^3+x+1
# dari x = a sampai x = b dengan batas 
a = float(input("Masukkan batas awal = "))
b = float(input("Masukkan batas akhir = "))


n = 0
if(a<=b):
    while (a<=b):
        y1 = a**3+a+1
        y2 = (a+(10**-45))**3+(a+(10**-45))+1
        luas = (y1+y2)*((10**-45))*0.5
        n = n + luas
        a+= (10**-45)
    print(n)
else:
    print('invalid')