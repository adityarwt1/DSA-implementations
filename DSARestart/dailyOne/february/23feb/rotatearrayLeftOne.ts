// my  appraoch for this questoin
// we can roate by taking the last element and put there in the one by one 
///
const nums = [1,2,3,4,5,6,7]
function rotate(nums: number[], k: number): void {
    for(let i = k ; i <= nums.length; i++){
        nums.unshift(nums[nums.length -1])
    }
};

// const result = rotate(nums, 2)
console.log(nums)

const revereFunction = (nums:number[], l:number,r:number)=>{
    while(l< r){
        [nums[l], nums[r]] = [nums[r], nums[l]]
        r--
        l++
    }
    
}
function rotate2(nums: number[], k: number): void {
    const n = nums.length;
    if (n <= 1) return;

    k = k % n; 

    revereFunction(nums, 0, n - 1);
    revereFunction(nums, 0, k - 1);
    revereFunction(nums, k, n - 1);
}
rotate2(nums,3)
console.log(nums)