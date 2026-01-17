function solution(schedules, timelogs, startday) {
    let answer = 0;
    
    for(let i = 0, len = schedules.length; i < len; i++) {
        const schedulesTime = schedules[i];
        const setTime = (time) => {
            let hour = Math.floor(time / 100);
            let min = time - (hour * 100) + 10;
        
            if(min >= 60) {
                min -= 60;
                hour += 1;
            }
    
            return ((hour * 100) + min);
        };
        
        const recognitionTime = setTime(schedulesTime);
        let week = startday;
        let flag = false;
        
        for(let j = 0; j < timelogs[i].length; j++) {
            const timelog = timelogs[i];
            
            if(week < 6) {
                if(recognitionTime < timelog[j]) {
                    console.log("조건 부합");
                    console.log("유연시간: "+recognitionTime);
                    console.log("현재 시간: " + timelog[week]);
                    console.log("현재 요일: " + week)
                    flag = false;
                    break;
                }
                
                
            
                flag = true;
            }
            
            week += 1;
            
            if(week > 7) {
                console.log("초기화")
                week = 1;
            }
        }
        
        
        
        if(flag) {
            answer += 1;
        }
    }
    
    return answer;
}
/**
출근 희망 시각 + 10분 / ex) 7:00 => 700 + 10 => 710 [7:10]


*/