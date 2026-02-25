// taking hashmap then sort by the increasing number of count and return the value of most frequent elemet
function findMaxConsecutiveOnes(nums: number[]): number {
    const hashMap = new Map()

    for(let i = 0 ; i < nums.length ; i++){
        hashMap.set(nums[i], (hashMap.get(nums[i])|| 0)+1)
    }

    // there is one more need to be added here for the solution 
    // need to solve the for the consicutiive level count

    // sorting wrt to frequenncy
    const result = [...hashMap].sort((a,b)=> a[1]-b[1])[0][1]
    console.log(result)
    return result
}

function findMaxConsecutiveOnes2(nums: number[]): number {
    // current eement
    let currentElement = nums[0]
    let maxCount= -Infinity
    let count = 1

    // interating for countting current element frequency
    for(let i = 1 ; i < nums.length; i++){
        // countt become zero
        if(count <= 0){
            currentElement =nums[i] 
        } else if(currentElement === nums[i]) {
            maxCount = Math.max(count, maxCount)
            count++;
        }
        else count--
    }

    return maxCount
};
const numsMaxConsective = [1,1,0,1,1,1]
console.log(findMaxConsecutiveOnes2(numsMaxConsective))
// console.log(findMaxConsecutiveOnes(nums))


const findMaxConsecutiveOnes3 = (nums:number[]):number=>{
    // this queston belong to kadan's algorithum
    let count = 0
    let maxCount = 0

    for(let i = 0 ; i < nums.length ; i++){
        if(nums[i]=== 1){
            count++
            maxCount = Math.max(maxCount, count)
        }else{
            count = 0
        }
    }

    return maxCount
}