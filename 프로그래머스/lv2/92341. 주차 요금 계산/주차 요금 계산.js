const solution = (fees, records) => {
    const cars = {};
    records.forEach(v => {
    let [time, car, type] = v.split(" ");
        
    const [hour, minute] = time.split(":");

    time = hour * 60 + Number(minute);
    
    if (!cars[car]) {
      cars[car] = { time: 0, car };
    }
        
    cars[car].type = type;
        
    if (type == "OUT") {
        cars[car].time += time - cars[car].lastInTime;
        return;
    }
        
    cars[car].lastInTime = time;
  });

  return Object.values(cars)
    .sort((a, b) => a.car - b.car)
    .map(v => {
      if (v.type == "IN") {
        v.time += 1439 - v.lastInTime;
      }
      
      if (fees[0] > v.time) {
        return fees[1];
      }
            
      return fees[1] + Math.ceil((v.time - fees[0]) / fees[2]) * fees[3];
    });
}


/*
fees = [180, 5000, 10, 600]
records = ["05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"]
result = [14600, 34400, 5000]
*/