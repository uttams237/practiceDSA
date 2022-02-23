#KADANE's algorithm
# To the contiguous sub-array with maximum sum

import sys


def kadane_algo(self,arr,n):
#     n : lenght of arr
    dp=[arr[0]]
    maxTillNow= dp[0]

    for i in range(1,n):
        temp=max(arr[i], arr[i]+dp[-1])
        maxTillNow= max(maxTillNow, temp)
        dp.append(temp)

    return maxTillNow





#main
print("Input an array : ",end="")
array=list(int(ele) for ele in input().split())
length=len(array)
starting_index,ending_index,biggest_sum=kadane_algo(array,length)
print("The biggest continous sum in array : "+str(array)+" is"+str(biggest_sum)+" and the starting index and ending index are "+str(starting_index)+" & "+str(ending_index))
