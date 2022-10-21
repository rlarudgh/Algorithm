def solution(s):
    numbers = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    answer = s
    for i, v in enumerate(numbers):
        answer = answer.replace(v, str(i))
    
    return int(answer)

# def solution(s):
#     numbers = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
#     num_dic = {
#         'zero': 0,
#         ...
#     }