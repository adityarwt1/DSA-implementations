// just counting the requency of the number apprence then
function singleNumber(nums: number[]): number {
    const hashMap = new Map()

    // counting frequency
    for(let i = 0 ; i < nums.length ; i++){
        hashMap.set(nums[i], (hashMap.get(nums[i])|| 0)+ 1)
    }
    // getting uniques value
   const sortedArrayValue=  [...hashMap].sort((a,b)=>  a[1] - b[1] )[0][0]
   return sortedArrayValue
};

singleNumber([2,2,1])