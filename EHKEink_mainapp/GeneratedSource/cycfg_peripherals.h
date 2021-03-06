/*******************************************************************************
* File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_scb_uart.h"
#include "cy_sysclk.h"
#include "cy_scb_spi.h"
#include "cy_tcpwm_counter.h"
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define UART_HW SCB5
#define UART_IRQ scb_5_interrupt_IRQn
#define CY_EINK_SPIM_HW SCB6
#define CY_EINK_SPIM_IRQ scb_6_interrupt_IRQn
#define CY_EINK_Timer_HW TCPWM1
#define CY_EINK_Timer_NUM 0UL
#define CY_EINK_Timer_MASK (1UL << 0)

extern const cy_stc_scb_uart_config_t UART_config;
extern const cy_stc_scb_spi_config_t CY_EINK_SPIM_config;
extern const cy_stc_tcpwm_counter_config_t CY_EINK_Timer_config;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
