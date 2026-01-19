function solution(video_len, pos, op_start, op_end, commands) {
    let answer = '';
    
    function formattedMinutes(time) {
        const [hour, min] = time.split(":");
        
        return Number(hour) * 60 + Number(min);
    }
    
    let currentTime = formattedMinutes(pos);
    let videoMinTime = formattedMinutes(video_len);
    
    // 오프닝 건너뛰기
    let opStartTime = formattedMinutes(op_start);
    let opEndTime = formattedMinutes(op_end);
    
    if(currentTime >= opStartTime && currentTime <= opEndTime) {
        currentTime = opEndTime;
    }
    
    // commands
    for(let i = 0, len = commands.length; i < len; i++) {
        const keyword = commands[i];
        
        
        switch(keyword) {
            case 'next': {
                if(currentTime + 10 > videoMinTime) {
                    currentTime = videoMinTime;
                } else {
                    currentTime += 10;
                }
                
                break;
            }
            case 'prev': {
                if(currentTime < 10) {
                    currentTime = 0;
                } else {
                    currentTime -= 10;
                }
                break;
            }
        }
        
         // 오프닝 건너뛰기
        opStartTime = formattedMinutes(op_start);
        opEndTime = formattedMinutes(op_end);
        
        if(currentTime >= opStartTime && currentTime <= opEndTime) {
            currentTime = opEndTime;
        }
        
        console.log(`${Math.floor(currentTime /  60)}: ${currentTime %60}`)
    }
    
    // 오프닝 건너뛰기
    opStartTime = formattedMinutes(op_start);
    opEndTime = formattedMinutes(op_end);
    
    if(currentTime >= opStartTime && currentTime <= opEndTime) {
        currentTime = opEndTime;
    }
    
    const hours = Math.floor(currentTime / 60);
    const min = currentTime % 60;
        
    return `${String(hours).padStart(2, '0')}:${String(min).padStart(2, '0')}`;
}