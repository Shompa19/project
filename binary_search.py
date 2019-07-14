def binary_Search(list,item):
    f=0
    l=len(list)-1
    found=False
    while(f <= l and not found):
        mid=(f+l)//2
        if list[mid]==item:
            found=True
        else:
            if item < list[mid]:
                l=mid-1
            else:
                f=mid+1
    return found
print(binary_Search([1,2,3,5,8],6))
