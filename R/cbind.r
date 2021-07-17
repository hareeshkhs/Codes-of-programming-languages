#(Q)Write a R program to create three vectors a,b,c with 3 integers. Combine the three vectors to become a 3×3 matrix where each column represents a vector. Print the content of the matrix.

add <- function(){
  vec=c()
  for(j in 1:3){
    num <- as.integer(readline(prompt="Enter a number: "))
    vec[j]<-num
  }
  return (vec)
}
vec1=add()
vec2=add()
vec3=add()
cbind(vec1,vec2,vec3)
rbind(vec1,vec2,vec3)