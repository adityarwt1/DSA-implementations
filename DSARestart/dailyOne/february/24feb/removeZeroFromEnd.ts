/// first appraoch when ever zero appear make swapiing it 
const numsArray= [0,1,0,3,12]
function moveZeroes(nums: number[]): void {

    let swappingIndex = 0;

    for(let i = 0 ; i < nums.length; i++){
        if(nums[i] !== 0){
            [nums[i] , nums[swappingIndex]] = [nums[swappingIndex], nums[i]]
            swappingIndex++;
        }
    }

};
moveZeroes(numsArray)
console.log(numsArray)