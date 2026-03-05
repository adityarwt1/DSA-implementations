// constraini thinking 
// we can't use two consecutive loop
// out of bound condion of 
// number is very big
const rearrangeArrayTest = [3,1,-2,-5,2,-4]
function rearrangeArray(nums: number[]): number[] {
    // i think sorting is my mmistake 
    nums.sort((a,b)=> a -b)
    let positveIndex = 0
    let negativeIndex = 1

    for(let i = 0 ; i < nums.length ; i++){
        // if number is posive
        if(nums[i]  > 0 && positveIndex < nums.length){
            nums[positveIndex] = nums[i]
            positveIndex += 2
        } else if(nums[i] < 0 && negativeIndex < nums.length) {
            nums[negativeIndex] = nums[i]
            negativeIndex += 2;
        } 
    }
    return nums 
};
console.log(rearrangeArray(rearrangeArrayTest))

function rearrangeArray2(nums: number[]): number[] {

    const result = new Array(nums.length)

    let positiveIndex = 0
    let negativeIndex = 1

    for(let i = 0; i < nums.length; i++){

        if(nums[i] > 0){
            result[positiveIndex] = nums[i]
            positiveIndex += 2
        }else{
            result[negativeIndex] = nums[i]
            negativeIndex += 2
        }

    }

    return result
}