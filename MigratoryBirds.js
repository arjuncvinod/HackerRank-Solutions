//Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. 
//If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

// Function Description

// Complete the migratoryBirds function in the editor below.

// migratoryBirds has the following parameter(s):

// int arr[n]: the types of birds sighted
// Returns

// int: the lowest type id of the most frequently sighted birds

//  link to the problem:https://www.hackerrank.com/challenges/migratory-birds/problem

function migratoryBirds(arr) {
  let sorted = arr.sort();
  let ans = sorted[0];
  let maxOccur = 1,
    counter = 0;

  for (let i = 0; i < sorted.length; i++) {
    counter = sorted[i] === sorted[i - 1] ? counter + 1 : 0;
    if (counter > maxOccur) {
      ans = sorted[i];
      maxOccur = counter;
    }
  }

  return ans;
}
