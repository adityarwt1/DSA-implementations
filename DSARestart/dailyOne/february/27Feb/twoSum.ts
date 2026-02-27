/// thsi is very easy problem in this problem we need to just find the complement of the the substrrationi from the entire array
// storing complemment also as the 
const twoSum = (nums:number[], target:number):number[]=>{
    const hashMap = new Map()

    for(let i = 0 ; i < nums.length ; i++){
        // compliment 
        const complement = target - nums[i]
        // iff complement exist on hashMap
        if(hashMap.has(complement)){
            return [hashMap.get(complement), i]
        }
        else{
            hashMap.set(nums[i],i )
        }
    }
    return []
}

console.log(twoSum([2,7,11,15], 9))