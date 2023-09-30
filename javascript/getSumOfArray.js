const arr = [5, 10, 20];

const sum = arr.reduce((accumulator, value) => {
    return accumulator + value;
}, 0);

console.log(sum);
