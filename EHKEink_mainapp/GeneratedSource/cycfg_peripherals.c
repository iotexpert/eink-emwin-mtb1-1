/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* 
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

#define CY_EINK_Timer_INPUT_DISABLED 0x7U

const cy_stc_scb_uart_config_t UART_config = 
{
	.uartMode = CY_SCB_UART_STANDARD,
	.enableMutliProcessorMode = false,
	.smartCardRetryOnNack = false,
	.irdaInvertRx = false,
	.irdaEnableLowPowerReceiver = false,
	.oversample = 14,
	.enableMsbFirst = false,
	.dataWidth = 8UL,
	.parity = CY_SCB_UART_PARITY_NONE,
	.stopBits = CY_SCB_UART_STOP_BITS_1,
	.enableInputFilter = false,
	.breakWidth = 11UL,
	.dropOnFrameError = false,
	.dropOnParityError = false,
	.receiverAddress = 0x0UL,
	.receiverAddressMask = 0x0UL,
	.acceptAddrInFifo = false,
	.enableCts = false,
	.ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rtsRxFifoLevel = 0UL,
	.rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rxFifoTriggerLevel = 63UL,
	.rxFifoIntEnableMask = 0UL,
	.txFifoTriggerLevel = 63UL,
	.txFifoIntEnableMask = 0UL,
};
const cy_stc_scb_spi_config_t CY_EINK_SPIM_config = 
{
	.spiMode = CY_SCB_SPI_MASTER,
	.subMode = CY_SCB_SPI_MOTOROLA,
	.sclkMode = CY_SCB_SPI_CPHA0_CPOL0,
	.oversample = 16,
	.rxDataWidth = 8UL,
	.txDataWidth = 8UL,
	.enableMsbFirst = true,
	.enableInputFilter = false,
	.enableFreeRunSclk = false,
	.enableMisoLateSample = true,
	.enableTransferSeperation = false,
	.ssPolarity = ((CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT0) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT1) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT2) | \
                                         (CY_SCB_SPI_ACTIVE_LOW << CY_SCB_SPI_SLAVE_SELECT3)),
	.enableWakeFromSleep = false,
	.rxFifoTriggerLevel = 63UL,
	.rxFifoIntEnableMask = 0UL,
	.txFifoTriggerLevel = 63UL,
	.txFifoIntEnableMask = 0UL,
	.masterSlaveIntEnableMask = 0UL,
};
const cy_stc_tcpwm_counter_config_t CY_EINK_Timer_config = 
{
	.period = 65535,
	.clockPrescaler = CY_TCPWM_COUNTER_PRESCALER_DIVBY_128,
	.runMode = CY_TCPWM_COUNTER_ONESHOT,
	.countDirection = CY_TCPWM_COUNTER_COUNT_UP,
	.compareOrCapture = CY_TCPWM_COUNTER_MODE_CAPTURE,
	.compare0 = 16384,
	.compare1 = 16384,
	.enableCompareSwap = false,
	.interruptSources = CY_TCPWM_INT_NONE,
	.captureInputMode = CY_EINK_Timer_INPUT_DISABLED & 0x3U,
	.captureInput = CY_TCPWM_INPUT_0,
	.reloadInputMode = CY_EINK_Timer_INPUT_DISABLED & 0x3U,
	.reloadInput = CY_TCPWM_INPUT_0,
	.startInputMode = CY_EINK_Timer_INPUT_DISABLED & 0x3U,
	.startInput = CY_TCPWM_INPUT_0,
	.stopInputMode = CY_EINK_Timer_INPUT_DISABLED & 0x3U,
	.stopInput = CY_TCPWM_INPUT_0,
	.countInputMode = CY_EINK_Timer_INPUT_DISABLED & 0x3U,
	.countInput = CY_TCPWM_INPUT_1,
};


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_SCB5_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);

	Cy_SysClk_PeriphAssignDivider(PCLK_SCB6_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);

	Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM1_CLOCKS0, CY_SYSCLK_DIV_16_BIT, 0U);
}
