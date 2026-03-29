# ESP32 Serial Display ADC — Protocolo Y/W/X com LCD e ADC

🇧🇷 **Português** | 🇺🇸 [English](#english)

---

## Português

Versão completa do protocolo serial Y/W/X com LCD e leitura de ADC no GPIO15, convertendo tensão com fator `/1240.9`.

### O que faz
- Implementa protocolo serial **Y/W/X** (9600 bps)
- Lê sinal analógico via **ADC no GPIO15**
- Converte valor ADC para grandeza física: `valor = raw / 1240.9`
- Exibe dados no **LCD**
- Transmite leituras via serial para interface Kivy

### Fórmula de conversão
```
grandeza = ADC_raw / 1240.9
```

### Mapa de pinos
| Pino | Função |
|---|---|
| GPIO15 | ADC — entrada analógica |
| LCD pins | Display de dados |

### Plataforma
ESP32 — Arduino Framework

---

## English

Full Y/W/X serial protocol version with LCD and ADC reading on GPIO15, converting voltage with factor `/1240.9`.

### What it does
- Implements **Y/W/X** serial protocol (9600 bps)
- Reads analog signal via **ADC on GPIO15**
- Converts ADC value to physical quantity: `value = raw / 1240.9`
- Displays data on **LCD**
- Transmits readings over serial to Kivy interface

### Conversion formula
```
quantity = ADC_raw / 1240.9
```

### Pin map
| Pin | Function |
|---|---|
| GPIO15 | ADC — analog input |
| LCD pins | Data display |

### Platform
ESP32 — Arduino Framework
