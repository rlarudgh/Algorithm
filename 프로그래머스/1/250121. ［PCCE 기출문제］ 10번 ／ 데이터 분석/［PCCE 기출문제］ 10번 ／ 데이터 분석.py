def solution(data, ext, val_ext, sort_by):
    col_names = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    
    ext_idx = col_names[ext]
    sort_idx = col_names[sort_by]
    
    filtered_data = []
    
    for d in data:
        if d[ext_idx] < val_ext:
            filtered_data.append(d)
            
    def quick_sort(arr, index):
        if len(arr) <= 1:
            return arr
        
        pivot = arr[0]
        
        left = [x for x in arr[1:] if x[index] < pivot[index]]
        right = [x for x in arr[1:] if x[index] >= pivot[index]]
        
        return quick_sort(left, index) + [pivot] + quick_sort(right, index)

    answer = quick_sort(filtered_data, sort_idx)
    return answer
