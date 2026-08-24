programa {

  inteiro hamb, refri, bat, qhamb, qrefri, qbat, thamb, trefri, tbat, preco
  funcao inicio() {
  hamb = 18
  refri = 7
  bat = 12
    escreva("-----------------------------------------\n")
    escreva("            T E C H  - D O G             \n")
    escreva("-----------------------------------------\n")
    escreva("Digite quantos hamburgueres deseja pedir: \n")
    leia(qhamb)
    escreva("Digite quantos refrigerante deseja pedir: \n")
    leia(qrefri)
    escreva("Digite quantas batata deseja pedir: \n")
    leia(qbat)
    thamb = (hamb*qhamb)
    trefri = (refri*qrefri)
    tbat = (bat*qbat)
    preco = (thamb + trefri + tbat)
    escreva("O valor total do pedido sera de: ", preco)
  }
}
