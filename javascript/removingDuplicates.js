let arr = ["a", "b", "c",
    "d", "w", "q", "b", "c"];

function removeDuplicates(arr) {
    return arr.filter((item,
                       
                      index) => arr.indexOf(item) === index);
}

console.log(removeDuplicates(arr));
