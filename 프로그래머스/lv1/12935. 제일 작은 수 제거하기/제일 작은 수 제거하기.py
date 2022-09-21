def solution(arr):
    answer = []
    length = len(arr)
    minvalue = min(arr)
    for i in range(length):
        if length == 1 : 
            answer.append(-1)
        if arr[i] != minvalue :
            answer.append(arr[i])
    
    return answer