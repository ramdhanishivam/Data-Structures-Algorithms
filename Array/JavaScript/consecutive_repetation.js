var arr = ['a','t','f','q','q','q','x','a','f','f','f','f','f','t','a','c','a','a','a'];
var current_max = 0;
var max = 0;
let result = {};
for (var i = 0; i < arr.length; i++) {
    if (arr[i] == arr[i+1]) {
      current_max += 1;
    } else {
      max += 1;
      current_max += 1;
      if (current_max > max) {
        max = current_max;
        result[max] = arr[i];
      }
      max = 0;
      current_max = 0;
    }
}
const indexes = Object.keys(result); // get all the keys
const max_index = Math.max.apply(Math,indexes); // to find the greatest of all.
console.log(result[max_index] + ' => ' + max_index); // print the most consecutive repetated letter of array.