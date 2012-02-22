#define UART0_DATA REG(0xD000)
#define UART0_STATUS REG(0xD001)
#define		UART_STATUS_TREGE	0x01
#define		UART_STATUS_TRDY	0x02
#define		UART_STATUS_FERR	0x04
#define		UART_STATUS_OERR	0x08
#define		UART_STATUS_DRDY	0x10
#define UART0_DIVIDER REG16(0xD002)

#define UART1_DATA REG(0xD010)
#define UART1_STATUS REG(0xD011)
#define UART1_DIVIDER REG16(0xD012)

#define UART2_DATA REG(0xD020)
#define UART2_STATUS REG(0xD021)
#define UART2_DIVIDER REG16(0xD022)

#define UART3_DATA REG(0xD030)
#define UART3_STATUS REG(0xD031)
#define UART3_DIVIDER REG16(0xD032)

#define CLOCK_TICKS REG16(0xD090)
#define CLOCK_MS REG16(0xD092)
