class SmartPhone{
    constructor (modelName, proccesor){
        this.modelName = modelName
        this.proccesor = proccesor
    }

    getModelName(){
        return this.modelName
    }

    getProccessorName(){
        return this.proccesor
    }
}


const phone = new SmartPhone("Iqoo z7 Pro", "Dimensity 7200")

console.log(phone.getModelName())