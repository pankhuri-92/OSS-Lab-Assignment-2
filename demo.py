def duplicate(lst):
    unique = []
    duplicateList = []

    for i in lst:
        if i not in unique:
            unique.append(i)
        elif i not in duplicateList:
            duplicateList.append(i)
    return duplicateList

numbers = [1, 2, 2, 3, 4, 5, 2, 3, 6, 1]
print(f"The given list : {numbers}")
print(f"Duplicates in the list : {duplicate(numbers)}")  
