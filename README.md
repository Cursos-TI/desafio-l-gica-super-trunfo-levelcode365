# Super Trunfo - Nível Mestre

Este projeto é a versão avançada do clássico jogo **Super Trunfo**, desenvolvido em **C**, que permite comparar cartas de cidades usando **dois atributos numéricos**. Ele integra menus dinâmicos, operadores ternários e lógica de comparação avançada, de acordo com o desafio da faculdade.

---

## Autor

- Nicolas Felipe

---

## Funcionalidades

- Cadastro de **duas cartas** com os seguintes atributos:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (em bilhões)
  - Pontos turísticos
- Cálculo automático de:
  - **Densidade Demográfica** (população / área)
  - **PIB per capita** (PIB / população)
- **Comparação de duas cartas** baseada em **dois atributos diferentes**.
- Menus **dinâmicos**:
  - O segundo atributo não pode ser igual ao primeiro.
- Tratamento de empates.
- Cálculo da **soma dos atributos** para determinar o vencedor final.
- Resultados claros e organizados exibindo:
  - Nome das cidades
  - Valores de cada atributo escolhido
  - Soma dos atributos
  - Carta vencedora ou empate

---

## Como Compilar

Para compilar o programa, use um compilador de C, como o **GCC**. No terminal:

```bash
gcc supertrunfo.c -o supertrunfo
