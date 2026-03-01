// as i can do the recall when i was recall this imporatant algo the most probabllyy the 
// contrain thinking 
const testArray = [3,2,3]
const testArray2 = [2,2,1,1,1,2,2]
const majorityElement = (nums:number[])=>{
    //// in this algo basically i can do my best by just making the concel the element 
    
    let ele = nums[0]
    let count =1 
    // starting loop from here 
    for(let i = 1 ; i < nums.length ;i++){
        if(ele !== nums[i]){
            count--
        } 
        else if(count === 0){
            ele = nums[i]
        }
        else count++
    }

    return ele
}

console.log(majorityElement(testArray))
console.log(majorityElement(testArray2))