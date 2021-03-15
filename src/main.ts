import * as readline from "readline";
import { ELEMENTS } from "./elements";

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function findElements(word: string, arr: string[]) {
  for (const [symbol, elem] of Object.entries(ELEMENTS)) {
    if (word.includes(symbol)) {
      arr.push(elem);
    }
  }
  return arr;
}

function sortElements(arr: string[]) {
  arr.sort((a, b) => {
    return a.localeCompare(b);
  });
  return arr;
}

let getWord = () => {
  rl.question(">> ", (word) => {
    if (word == "quit") {
      return rl.close();
    }

    word = word.toLowerCase();
    let elementsInWord = [];
    elementsInWord = findElements(word, elementsInWord);
    elementsInWord = sortElements(elementsInWord);
    console.log(elementsInWord.join(", "));
    getWord();
  });
};

getWord();
