// First line contains the number of cases to be considered. -- n Next n lines contains the details of a, b , c, d, i and j. The format is as bellow.

// [value of a] [value of b] [value of c] [value of d] [value of i] [value of j]

// Output n lines specifying how many bullets are placed on the special are by two sides.


function processData(input) {

    var lines = input.split("\n");
    var n = parseInt(lines[0]);

    function nuclear(a, b, c, d, i, j) {
        var count = 0;
        for (var x = a; x <= b; x++) {
            for (var y = c; y <= d; y++) {
                if (x + y >= i && x + y <= j) {
                    count++;
                }
            }
        }
        return count;
    }

    for (var i = 1; i <= n; i++) {
        var line = lines[i].split(" ");
        var a = parseInt(line[0]);
        var b = parseInt(line[1]);
        var c = parseInt(line[2]);
        var d = parseInt(line[3]);  
        var i = parseInt(line[4]);
        var j = parseInt(line[5]);
        var result = nuclear(a, b, c, d, i, j);
        console.log(result);
    }



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
