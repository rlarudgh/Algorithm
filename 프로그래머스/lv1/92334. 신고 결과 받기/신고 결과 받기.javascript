const solution = (id_list, report, k) => {
    const answer = [];
    let report_list = {};
    for(let i = 0; i < id_list.length; i++){
        answer[i] = 0;
    }
    id_list.map(user=>{
        report_list[user] = []; 
    })
    
    report.map(user=>{
        let [userName, reportUserName] = user.split(' ');
        !report_list[reportUserName].includes(userName) 
            ? report_list[reportUserName].push(userName)
            : null;
    })
    for(const key in report_list){
        if(report_list[key].length >= k){
            report_list[key].map(user=>{
                answer[id_list.indexOf(user)]++;
            })
        }
    }
    return answer;
}