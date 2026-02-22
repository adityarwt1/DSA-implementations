/// as the my old memory this qustion askin for thee removal fo the duplicate and return the remode value as the k
/// my first approch this question 
/// intution of the questioon start removing from he end of start and ass well as countt the 
/// from teh questtoin as we know tthe we get thhe sorted arrray mean we have the check from i + 

// test array 
const array = [0,0,1,1,1,2,2,3,3,4]

/// function from remove the element
const removeDuplicate = (nums:number[])=>{
    // let say we need to remove frm the 0 index if have the duplicate value at the upnext
    let k = 0;

    for(let i = 1 ; i < nums.length; i++){
        /// matlab ki agar vo value match nahi karata tabhi change karana hai
        if(nums[i] === nums[i-1]){
            nums[k++] = nums[i]
        }
        
    }

    return k

 }

// my first approach questoin 
console.log("before array", array)
const resultOfQuestion = removeDuplicate(array)
//// expection is one in the first test
console.log("remove elementt value" , resultOfQuestion)
console.log("after array", array)

/// the correct approach for this
const removeDuplicate2 = (nums:number[])=>{
    /// when  the array size iis two small 
    if(nums.length == 0) return 0;

    // starting the filling of the single vavlue from the one instead of 
    let k = 1;
    /// taking the value of k from the k 
    for(let i = 1 ; i < nums.length; i++){
        // if the unique value replace with the duplicate value
        if(nums[i]!== nums[i-1]){
            nums[k] = nums[i]
            k++
        }
    }

    return k
}

// learning from the probblemm take the 
/// k is also start from the 1 because the start from tthe filling
// when previous value se unique hhai current value mean this is the unique need to be change the value
// instead of incremtn in to the assigin process incrementt in the 
//  make sure to care whhere to start where to stop then write the logic


