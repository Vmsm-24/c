#include <stdio.h>


float calcularValorTotal(float monto, float tasa, int tiempo) {
    float interes = monto * tasa / 100 * tiempo;
    return monto + interes;
}


float calcularCuotasAnuales(float monto, int tiempo) {
    return monto / tiempo;
}


float calcularTotalIntereses(float monto, float tasa, int tiempo) {
    return monto * tasa / 100 * tiempo;
}

void tabla(float monto, float tasa, int tiempo) {
    printf("Año\tValor con Interés\tCuota Anual\tTotal de Intereses\n");
    for (int i = 1; i <= tiempo; i++) {
        float valorTotal = calcularValorTotal(monto, tasa, i);
        float cuotaAnual = calcularCuotasAnuales(monto, tiempo);
        float totalIntereses = calcularTotalIntereses(monto, tasa, i);
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, valorTotal, cuotaAnual, totalIntereses);
    }
}

int main() {
    float montoCredito = 10000;
    float tasaInteresAnual = 15;
    int tiempo;

    printf("Ingresa el periodo de tiempo en años para calcular el credito (0 para salir): ");
    scanf("%d", &tiempo);

    if (tiempo > 0) {
        printf("Valor con interés aplicado: %.2f\n", calcularValorTotal(montoCredito, tasaInteresAnual, tiempo));
        printf("Cuota Anual: %.2f\n", calcularCuotasAnuales(montoCredito, tiempo));
        printf("Total de Intereses: %.2f\n", calcularTotalIntereses(montoCredito, tasaInteresAnual, tiempo));

        printf("\nTabla:\n");
        tabla(montoCredito, tasaInteresAnual, tiempo);
    }

    return 0;
}
