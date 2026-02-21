// checkinngg the arrray is sorted by checkin the dip 
/// mean when the upcomming the numbber is nott less the previous one mean that the array is sored already 

const testArrray = [1,2,3,4,5,6,7,8,9]
const testArray2 = [1,2,3,4,5,6,4]

// write the check funtion who detect the dip of the given arrray whwer the dip is actully exist 

const checkArrayIsSorted = (numsArray:number[])=>{
    // checking throught thhe running on vala loop 
    for(let i = 0 ; i < numsArray.length -1 ; i++ ){
        if(numsArray[i] > numsArray[i+1]){
            console.log("iff condition is worked at the ", numsArray[i], numsArray[i+1])
            return false
        }
    }
    // difing the default retur value
    return true
}

// checking the sorted array 
const isSorted1 = checkArrayIsSorted(testArrray)
console.log(isSorted1 ? "Array is sorted as the program:":"array is not sorted!")
const isSorted2 = checkArrayIsSorted(testArray2)
console.log(isSorted2 ? "this return true ":"array is not sorted!")
// this metthod probabily not working on the case of the real dsa roated array quesiton 

const check  = (nums:number[]):boolean=>{
    // solving through counting the number
    let count = 0 ;
    for(let i = 0 ; i < nums.length ; i++){
        // taking the bound length 
        if(nums[i] > nums[(i+1) % nums.length]){
            // incrreainng the count
            count++            
        }
    }
    return count <= 1
}