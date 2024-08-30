function calcularFaturamento(dados) {
    const fatuDiario = dados.filter(dia => dia.faturamento > 0).map(dia => dia.faturamento);
    const menorFatu = Math.min(...fatuDiario);
    const maiorFatu = Math.max(...fatuDiario);
    const somaFatu = fatuDiario.reduce((acc, valor) => acc + valor, 0);
    const mediaFaturamento = somaFatu / fatuDiario.length;
    const diasAcimaMedia = fatuDiario.filter(valor => valor > mediaFaturamento).length;
    return {
        menorFatu,
        maiorFatu,
        mediaFaturamento,
        diasAcimaMedia
    };
}

const dados = [
    {"dia": 1, "faturamento": 1000.0},
    {"dia": 2, "faturamento": 2000.0},
    {"dia": 3, "faturamento": 4900.0},
    {"dia": 4, "faturamento": 1500.0},
    {"dia": 5, "faturamento": 2500.0},
    {"dia": 6, "faturamento": 0.0},
    {"dia": 7, "faturamento": 3000.0}
];
const resultado = calcularFaturamento(dados);
console.log(`Menor faturamento: R$ ${resultado.menorFatu.toFixed(2)}`);
console.log(`Maior faturamento: R$ ${resultado.maiorFatu.toFixed(2)}`);
console.log(`Media faturamento: R$ ${resultado.mediaFaturamento.toFixed(2)}`);
console.log(`Dias com faturamento acima da média: ${resultado.diasAcimaMedia}`);