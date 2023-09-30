function isAnagram(str1, str2) {
  if (
    str1.length === str2.length &&
    str1.split("").sort().join("") === str2.split("").sort().join("")
  ) {
    return true;
  } else {
    return false;
  }
}

console.log(isAnagram("allergy", "gallery"));

