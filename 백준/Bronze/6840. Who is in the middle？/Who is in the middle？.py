def who_is_in_the_middle(bear_bowl_list):
    return sorted(bear_bowl_list)[1]


if __name__ == "__main__":
    bear_bowl_list = []
    
    for _ in range(3):
        bowl = int(input())
        
        bear_bowl_list.append(bowl)
        
    print(who_is_in_the_middle(bear_bowl_list=bear_bowl_list))