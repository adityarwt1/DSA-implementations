function twoSum(nums: number[], target: number): number[] {
    const map = new Map()

    for(let i = 0 ; i < nums.length ; i++){
        const compliment = target - nums[i];

        if(map.has(compliment)){
            return [map.get(compliment), i]
        }  
        
        map.set(nums[i],i)
    }
    return []
};
const array = [ 1,2,4,5,6,7,8,9]
const map =  new Map()

map.set(4, 2)
console.log(map.has(4))

console.log(twoSum(array,11))