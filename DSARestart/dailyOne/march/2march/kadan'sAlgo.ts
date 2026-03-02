// i can recall kadan's algo
// taking sum in the real time 
// when the negative sum making and comparing the sum

const kadansAlgo = (nums:number[])=>{
    let start = 0 , end = 0 , tempStart = 0 , maxSum = -Infinity, currentsum = 0 

    for(let i = 0 ; i < nums.length; i++){
        currentsum += nums[i]

        if(currentsum> maxSum ){
            maxSum = currentsum 
            start  = tempStart
            end = i
        }
        if(currentsum   < 0){
            tempStart = i + 1
            currentsum =0
        }
    }
    return maxSum
}