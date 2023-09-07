function processData(input) {
    const lines = input.trim().split('\n');
    const C = parseInt(lines[0], 10);
    //what this does is split the string into an array of strings, then map each string to a number
    const stages = lines[1].split(' ').map(Number);


    
    const uniqueStages = new Set();

    for (let time = 0; time < stages.length; time++) {
        uniqueStages.add(stages[time]);

        if (uniqueStages.size === C) {
            console.log(time);
            return;
        }
    }

    console.log(-1); // Return -1 if Mario cannot cross the ravine within the given time.
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
    processData(_input);
});
