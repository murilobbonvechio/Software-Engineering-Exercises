programa {

  real vph, htra, salario

  funcao inicio() {
    escreva("----------------------------------\n")
    escreva("                R H               \n")
    escreva("----------------------------------\n")
    escreva("Digite o preço por hora de serviço: \n")
    leia(vph)
    escreva("Digite quantas horas trabalhou: \n")
    leia(htra)
    salario = (vph*htra)
    escreva("O salario que recebera sera de: \n", salario)
  }
}
