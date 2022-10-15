import random
y='abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'
m1=''
m=''
l=[]
c=''
for i in range(1,7):
     k=random.choice(y)
     l.append(k)
for i in l:
       m=m+i
print(m)
p=input('enter:')
if p==m:
    
    print('correct')
else:
     c='try again'
     print(c)
     if c=='try again':
          while c=='try again':
           l1=[]    

           for i in range(1,7):
                  k1=random.choice(y)
                  l1.append(k1)
           for i in l1:
                  m1=m1+i
           print(m1)
           p1=input('enter:')
           if p1==m1:
               print('correct')
           else:
               m1=''
               c='try again'
               print(c)
          

 

    


