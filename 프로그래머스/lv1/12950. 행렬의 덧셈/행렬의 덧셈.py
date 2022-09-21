def solution(arr1, arr2):
    answer = []
    len1 = len(arr1)
    len2 = len(arr2)
    temp = [];
    for i in range(len1):
        for j in range(len(arr1[i])):
            temp.append(arr1[i][j] + arr2[i][j])
        answer.append(temp)
        temp = []
            
    return answer