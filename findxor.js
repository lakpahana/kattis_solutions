function processData(input) {
    // Your task is to determine the code for each gem by performing a series of queries. You are given N integers and a set of Q queries, each denoted by two integers L and R. For each query, you need to find the bitwise XOR of all integers in the sequence from index L to R (inclusive). This XOR value will be a part of the code for one of the missing gems.
//     Input Format

// An integer N , representing the length of the sequence.
// A list of N positive integers sequence , denoting the numerical values of the gem codes.
// An integer Q , representing the number of queries.
// Q tuples queries[i], each containing two integers L and R , representing a query.
// Constraints

// 1 ≤ N ≤ 10^5
// 1 ≤ Q ≤ 10^4
// 1 ≤ sequence[i] ≤ 10^9
// 1 ≤ L ≤ R ≤ N
// Output Format

// A list of Q integers (Q lines), each denoting the XOR value for the corresponding query.
    //Enter your code here
    var lines = input.split("\n");
    var n = parseInt(lines[0]);
    var line = lines[1].split(" ");
    var a = [];
    for (var i = 0; i < line.length; i++) {
        a.push(parseInt(line[i]));
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
