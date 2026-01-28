const ExampleArrray =  [1,2,3,4,5,6,7,9,0]
// fixed window for for lenth 
const slideTheWindow = ()=>{
    for(let i = 0 ; i < ExampleArrray.length - 4; i++){
        let newExampleArrray = ExampleArrray.slice(i , i+4)
        console.log(newExampleArrray)
    }
}

const slidingWindowSum = (array:number[], k:number)=>{
    let windowSum = 0;
    let maxSum = -Infinity;

    for(let i = 0 ; i <= k; i++){
        windowSum += array[i];
    }
    maxSum = windowSum;

    for(let i = k ; i < array.length ; i++){
        let currentSum = windowSum - array[i-k] + array[i]
        maxSum = Math.max(currentSum, windowSum)
    }
    return maxSum
}

const slidingWindow2Improved = (array:number[], k: number)=>{
    let maxSum = -Infinity ;
    let windowSum = 0;

    for(let i = 0 ; i < k ; i++){
        windowSum += array[i]
    }

    for(let i = k ; i < array.length; i++){
        windowSum = windowSum - array[i-k] + array[i]
        maxSum = Math.max(maxSum, windowSum)
    }
    return maxSum
}
console.log(slidingWindowSum(ExampleArrray, 3))
// slideTheWindow()