function creatArrayOfFunctions(y){
    var arr = new Array();
    // wrong statement: var arr = [];
    // In Javascript, create array should use new Array();
    for( var i = 0; i < y ; i++){
        arr[i] = function(x){ return x + 1;}
    }
    return arr;
}
