function sortColors(nums:number[]) {
 
    let low = 0 ;
    let mid = 0 ; 
    let high = nums.length -1


    while(mid <= high) {

        if(nums[mid] == 0){
            [nums[low] , nums[mid]] = [nums[mid] , nums[low]]

            mid++
            low++
        }
        else if(nums[mid] === 1){
            mid++
        }
        else{
            [nums[mid] ,  nums[high]] = [nums[high], nums[mid]]
            high--
        }
    }
    return nums
}

console.log(sortColors([2, 0, 2, 1, 1, 0]));

// my effort for the sort colors
const sortColorsTwo  = (nums:number[])=>{
    
    /// using the kadan's algo we can just make the this sort colour probleme possible
    // using three variable low mid high

    let low = 0 // taking lowest pointer 
    let mid = 0 /// taking the mid pointer form the swapping it
    let high = nums.length -1

    while(low<= high){
        // when the mmid power dot the 0 switch to first because sortingt
        /// so basically in this algo the mid pointer is thhe main pointer
        if(nums[mid] === 0){
            /// switching to low 
            [nums[low], nums[high]] = [nums[high], nums[low]]
            // moving the mid pointer
            mid++
            /// moving the low pointer
            low++
        }else if(nums[mid]===1){ // mean to when the low in the 1 
            mid++
        }else{
            [nums[high],nums[mid]] = [nums[mid], nums[high]]
            high--
        }
    }
    return nums
}