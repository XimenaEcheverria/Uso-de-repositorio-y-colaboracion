#include<stdio.h>

int main() {
    int ancho, alto, posX1, posX2, posY1, posY2;
    float porcentajeX, porcentajeY, porcentajeAnchoIcono, porcentajeAltoIcono;

    scanf_s("%d %d %f %f %f %f", &ancho, &alto, &porcentajeX, &porcentajeY, &porcentajeAnchoIcono, &porcentajeAltoIcono);
    posX1 = ancho * porcentajeX;
    posY1 = alto * porcentajeY;
    posX2 = (ancho * porcentajeAnchoIcono) + posX1;
