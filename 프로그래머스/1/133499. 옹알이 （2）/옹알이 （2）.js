function solution(babbling) {
    const able = ['aya', 'ye', 'woo', 'ma'];
    
    return babbling.map((b) => {
        let babble = b;
        
        for(let i = 0, len = able.length; i < len; i++) {
            if(babble.includes(able[i].repeat(2))) {
                break;
            }
            
            babble = babble.split(able[i]).join(" ");
        }
        
        if(babble.split(" ").join("").length === 0){
            return babble;
        }
    }).filter(Boolean).length;
}