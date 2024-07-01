import numpy as np 

# working with axis in numpy in 2D array 

mat = np.array([[1,2,3],
                [4,5,6],
                [7,8,9]])

print(mat.sum(axis=0)) #sum each columns 
print(mat.sum(axis=1)) #sum each row 
print(mat.T) #Transpose the matrix 


#iterating through matrix 
for item in mat.flat:
    print(item, end=" ")

print()

print(mat.ndim) # print number of dimension 
print(mat.size) # print the size of matrix (no of elements )
print(mat.nbytes) # how much byte data is consumed by matrix 
print(mat.argmax()) # index of maximum index 
print(mat.argmin()) # index of minimum index 
print(mat.argsort()) # index of sorted element in matrix 

print(mat.ravel()) # make one dimension 
print(mat.reshape((9,1))) # reshape the given matrix in given order ... 


# Some more operations on matrix ... 

mat2 = np.array([[1,2,3],
                [4,5,6],
                [7,8,9]])

mat2 = mat2.T   # tranposing the matrix to make it different from mat


print(mat + mat2) # add two matrixes 
print(mat - mat2) # element wise subtraction  
print(mat * mat2) # element wise multiplication 
print(mat / mat2) # element wise division
print(np.sqrt(mat)) # elementwise square root ... 


print(mat.min())
print(mat.max())
print(mat.sum())

# searching in matrices 
print(np.where(mat > 3))
print(np.count_nonzero(mat))