const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question('', (input) => {
  const x = parseInt(input);
  // Write your code here
  console.log(x>11? "Yes":"No");

  readline.close();
});