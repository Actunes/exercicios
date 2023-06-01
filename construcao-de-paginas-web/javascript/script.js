function abrePrompt (){
    valor1 = parseInt(prompt("Digite o valor 1:"))
    operador = prompt("Digite o operador:")
    valor2 = parseInt(prompt("Digite o valor 2:"))

    if (operador == "+"){
        valor3 = valor1 + valor2
    }
    if (operador == "-"){
        valor3 = valor1 - valor2
    }
    if (operador == "*"){
        valor3 = valor1 * valor2
    }
    if (operador == "/"){
        valor3 = valor1 / valor2
    }
    document.getElementById("operacao").innerHTML = `${valor1} ${operador} ${valor2} = ${valor3}`

}
let btnPrompt = document.getElementById("botaoprompt")
btnPrompt.onclick = abrePrompt
