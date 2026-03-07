// logic ke hisab se to max profic tabhi hoga sab minimum share price hogga
function maxProfit(prices: number[]): number {
    let minimum = prices[0]
    let maxProfit = 0;

    for(let i = 0 ; i < prices.length ; i++){
        // if the current prices is lesser tha
        if(prices[i] < minimum) minimum = prices[i]
        else {
            let profit = prices[i] - minimum
            maxProfit = Math.max(profit, maxProfit)
        }
    }

    return maxProfit
};