let numberArray = [1, 2, 34, 54, 65, 37, 56, 67, 23, 76, 28,23,21,56]

Array.prototype.findLargest = function () {
    let maxValue = this[0]
    for (let i = 1; i < this.length; i++) {
        if (maxValue < this[i]) {
            maxValue = this[i]
        }
    }
    return maxValue;
}

console.log("Decending order = ", numberArray.findLargest());
