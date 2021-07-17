#1
v1 =  c(1,2,3,4)
v2 =  c(5,6,7,8,9,10)
print(v1)
print(v2)
result = array(c(v1,v2),dim = c(3,3,2))
print(result)
#2
s1 = c(1:24)
dim(s1) = c(3,2,4)
print(s1)
#3
print("The second row of the second matrix of the array:")
print(result[2,,2])
print("The element in the 3rd row and 3rd column of the 1st matrix:")
print(result[3,3,1])
#4
exam_data = data.frame(
  name = c('hari','kishore','sai','santosh','siri'),
  score = c(12.5, 9, 16.5, 9, 20),
  attempts = c(1, 3, 2, 3, 2),
  qualify = c('yes', 'no', 'yes', 'no', 'no')
)
print("Original dataframe:")
print(exam_data)
print("Extract Specific columns:")
result <- data.frame(exam_data$name,exam_data$score)
print(result)
#5
v <- 1:4
print(v)
print(seq(1, 4, by = 1))
print(v[2])
a=c(5,6,7,8)
b=c(1,2,3,4)
add<-a+b
print(add)
sub<-a-b
print(sub)
mul<-a*b
print(mul)
div<-a/b
print(div)
#6
m <- 1:10
n<- m[seq(3, length(m), 3)]
print(n)