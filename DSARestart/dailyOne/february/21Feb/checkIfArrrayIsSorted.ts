// First approach;-
// by the obersvation i saw the, when the upcommiing 
// numbber is lesser than previous one, this hit me this might be the shorted
//
const testArrray = [1,2,3,4,5,6,7,8,9]
const checkArrayIsSorted = (numsArray:number[])=>{
    // checking throught thhe running on vala loop 
    for(let i = 0 ; i < numsArray.length -1 ; i++ ){
        if(numsArray[i] > numsArray[i+1]){
            return false
        }
    }
    // difing the default retur value
    return true
}

// checking the sorted array 
const isSorted1 = checkArrayIsSorted(testArrray)
console.log(isSorted1 ? "Array is sorted as the program:":"array is not sorted!")
// const isSorted2 = checkArrayIsSorted(testArray2)
// console.log(isSorted2 ? "this return true ":"array is not sorted!")

// this metthod probabily not working on the case of the real dsa roated array quesiton 

const checkArrayIsSorted2 = (nums:number[]):boolean=>{
    // solving through counting the number of rotation
    let count = 0 ;
    for(let i = 0 ; i < nums.length ; i++){
        // checking under the bound
        if(nums[i] > nums[(i+1) % nums.length]){ 
            count++            
        }
    }
    return count <= 1
}