# esp32-serial-display-adc

ESP32 com comunicação serial, display LCD I2C e leitura analógica (ADC) — versão final do firmware PSEE.

## Descrição

Versão completa do firmware ESP32 para o sistema PSEE. Além do protocolo serial e display LCD, incorpora leitura do ADC para medir tensão analógica e enviá-la de volta ao aplicativo sob demanda.

## Hardware

- Placa: ESP32
- Display: LCD 16×2 com I2C (endereço 0x27)
- Entrada analógica: GPIO 15 (ADC)

## Protocolo serial

| Byte | Função |
|------|--------|
| `'Y'` | Início de frame |
| `'W'` | Fim de frame + exibe dados no LCD |
| `'X'` | Leitura ADC → converte para tensão → responde com valor |

## Conversão ADC

```
tensão (V) = leitura_ADC / 1240.909...
```
Fator calculado para escala 0–3,3 V com resolução de 12 bits.

## Configuração

- Baud rate: **9600**
- I2C address LCD: `0x27`
- Pino ADC: GPIO 15

## Dependências (Arduino IDE)

- `LiquidCrystal_I2C`

## Projeto relacionado

Firmware do TCC **PSEE** (Sistema de Pequena Escala de Ensino).

## Escola

Centro Tecnológico Liberato — Novo Hamburgo/RS
