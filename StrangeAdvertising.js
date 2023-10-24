// HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people on social media.

// On the first day, half of those 5 people (i.e.,floor(5/2)=2 ) like the advertisement and each shares it with 3 of their friends. At the beginning of the second day, floor(5/2)*3=2*3=6 people receive the advertisement.

// Each day, floor(recipients/2) of the recipients like the advertisement and will share it with  friends on the following day. Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1.

// Function Description

// Complete the viralAdvertising function in the editor below.

// viralAdvertising has the following parameter(s):

// int n: the day number to report
// Returns

// int: the cumulative likes at that day
// Link to the problem:https://www.hackerrank.com/challenges/strange-advertising/problem

function viralAdvertising(n) {
  let rec = 5,
    like = 0;
  for (let i = 0; i < n; i++) {
    like += Math.floor(rec / 2);
    rec = Math.floor(rec / 2) * 3;
  }
  return like;
}
