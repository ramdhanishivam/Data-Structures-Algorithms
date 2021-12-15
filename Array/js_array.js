const numbers = [45, 4, 9, 16, 25];
var people = [
    {
        "name": "Rahul",
        "dob": "12-06-2000",
        "location": {"x": 1, "y": 10}
    },
    {
        "name": "Priti",
        "dob": "02-02-2010",
        "location": {"x": 10, "y": 15}
    },
    {
        "name": "Ashish",
        "dob": "15-05-19840",
        "location": {"x": 5, "y": 6}
    }
];

people.forEach(distanceFromOrigin);

function distanceFromOrigin(value, index, array) {
  // calcualte distance of (x,y) from origin (0,0)
  value["distance"] = Math.sqrt(value.location.x * value.location.x + value.location.y * value.location.y);
  console.log(value);
}