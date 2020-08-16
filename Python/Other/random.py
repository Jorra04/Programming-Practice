class random:

    def from_mind_sorting_algo(self,arr):
        for i in range(len(arr)):
            for j in range(i,len(arr)):
                if arr[i] > arr[j]:
                    temp = arr[i]
                    arr[i] = arr[j]
                    arr[j] = temp
        return arr


randy = random()
arr = [1,5,2,6,8,3,7,3,6,9]
randy.from_mind_sorting_algo(arr)

for i in arr:
    print(i)