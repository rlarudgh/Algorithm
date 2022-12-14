function solution(id_pw, db) {
    let result = '';
    const [id, password] = id_pw;
    for(const data of db){
        const [data_id, data_password] = data;
        if(data_id === id){
            if(data_password === password){
                result = "login";
            } else {
                result = "wrong pw";
            }
            break;
        } else {
            result = "fail";
        }
    }
    return result
}