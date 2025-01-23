#ifndef CONFIG_H_
#define CONFIG_H_

#include "local.h"
#include "_serv_app.h"

#define DEBUG_MODE		// Режим отладки
//#define DEBUG_UART_TX 	// Отладочная информация в UART1 / 115200bit ASCI
//=======================================================================================================================
//APP
#define CONFIG_TIMEOUT_RETURN_TO_HOME_PAGE 				1000*60*5		// (Милисек) Время до возврата на главную страницу
#define CONFIG_TIMEOUT_CONTROL_SAVE_LOGS 				1000*60*5		// (Милисек) Период сохраннеия логов
#define CONFIG_TIMEOUT_VIEW_START_LOADING_PAGE			1000			// (Милисек) Максмимальное время для загрузки системы
#define CONFIG_TIMEOUT_SD_BY_CRIT_OVERLOW 				1000*60			// (Милисек) Время задержки отключения при критическом разряде
#define CONFIG_TIMEOUT_HOLD_POWER_BTN_OFF				1000			// (Милисек) Время удержания кнопки отключения для срабатывания
#define CONFIG_TIMEOUT_HOLD_POWER_BTN_ON				1000			// (Милисек) Время удержания кнопки включения для срабатывания


//=======================================================================================================================
//EMBBEDED
#define CONFIG_VCC_3_3V 								3.28			// Точное напряжение источника питания 3.3В
#define CONFIG_VREF_ANALOG 								CONFIG_VCC_3_3V	// Точное опорное напряжение аналоговой перефирии
#define CONFIG_BASIC_CURRENT_CONSUMPTION_BOARDS			0.5				// Ток(А) собственное потребление платы управления
//ADC
#define CONFIG_ADC_TIMEOUT_UPDATE_SENSOR				100				// Время в мсек между измерениями АЦП
#define CONFIG_ADC_V_REF 								CONFIG_VREF_ANALOG	// Опорное напряжение АЦП
#define CONFIG_RESISTROR_NOM_V_BUS_32_H 				100000			// Сопротивление резистора верхнего плеча линии модуля BMS 3.2в
#define CONFIG_RESISTROR_NOM_V_BUS_32_L 				22020			// Сопротивление резистора нижнего плеча линии модуля BMS 3.2в
#define CONFIG_RESISTROR_NOM_V_BUS_64_H 				100000			// Сопротивление резистора верхнего плеча линии модуля BMS 6.4в
#define CONFIG_RESISTROR_NOM_V_BUS_64_L 				21890			// Сопротивление резистора нижнего плеча линии модуля BMS 6.4в
#define CONFIG_RESISTROR_NOM_V_BUS_96_H 				100000			// Сопротивление резистора верхнего плеча линии модуля BMS 9.6в
#define CONFIG_RESISTROR_NOM_V_BUS_96_L 				22170			// Сопротивление резистора нижнего плеча линии модуля BMS 9.6в
#define CONFIG_RESISTROR_NOM_V_BUS_128_H 				100000			// Сопротивление резистора верхнего плеча линии модуля BMS 12.8в
#define CONFIG_RESISTROR_NOM_V_BUS_128_L 				21650			// Сопротивление резистора нижнего плеча линии модуля BMS 12.8в

#define CONFIG_INA226_TIMEOUT_UPDATE_DATA 				500				// Время в милисек между измерениями тока и напряжения
#define CONFIG_INA226_SHUNT_OMH_NOMINAL 				0.0002480		// Номинал шунта в Омах (макс. измеряемое падение напряжение ±81.92 мВ)
#define CONFIG_INA226_MAX_CURRENT 						0.08192/CONFIG_INA226_SHUNT_OMH_NOMINAL // Максимальный ток на шунте
//DAC
#define CONFIG_DAC_V_REF 								CONFIG_VREF_ANALOG	// Опорное напряжение ЦАП
//CHARGER
#define CONFIG_RESISTROR_NOM_DAC_CC_OPA_H 				9100			// R верхнего плеча делителя, задающего коэф.усил. по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CC_OPA_L 				10000			// R нижнего плеча делителя, задающего коэф.усил. по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CC_VD_H 				0				// R верхнего плеча выходного делителя по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CC_VD_L 				0				// R нижнего плеча выходного делителя по линии контроля CC

#define CONFIG_RESISTROR_NOM_DAC_CV_OPA_H 				99700			// R верхнего плеча делителя, задающего коэф.усил. по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CV_OPA_L 				21640			// R нижнего плеча делителя, задающего коэф.усил. по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CV_VD_H 				99700			// R верхнего плеча выходного делителя по линии контроля CC
#define CONFIG_RESISTROR_NOM_DAC_CV_VD_L 				21640			// R нижнего плеча выходного делителя по линии контроля CC

#define CONFIG_CHARGER_MAX_U 							14.80			// Максимальное напряжение модуля зарядки
#define CONFIG_CHARGER_MAX_I 							125				// Максимальный ток модуля зарядки
#define CONFIG_CHARGER_REF_U_CONFIG 					5.00			// Опорное напряжение интерфейсов конфигурации на модуле зарядки
#define CONFIG_CHARGER_REF_I_CONFIG 					2.47			// Опорное напряжение интерфейсов конфигурации на модуле зарядки
//TEMPER
#define CONFIG_RESISTROR_NOM_NTC 						10000			// R всех терморезисторов

//=======================================================================================================================
//POWER, BATTARY
#define CONFIG_CAPACITOR_CELL 							304		// Ёмкость одной ячейки аккумулятора
#define CONFIG_EFFICIENCY_CHARGING_CELL 				0.95	// Эфективность зарядки (КПД) ячейки (% / 100);
#define CONFIG_NUM_CELLS 								4		// кол-во ячеек аккумулятора

//QUARDS POWER
#define CONFIG_BATTARY_HIGHT_LIMIT_VOLTAGE_CELL			3.65	// Предельное высокое напряжение ячейки
#define CONFIG_BATTARY_HIGHT_RECONNECT_VOLTAGE_CELL		3.55	// Напряжения снятия флага ошибки перезаряда
#define CONFIG_BATTARY_LOW_LIMIT_VOLTAGE_CELL			2.70	// Предельное низкое напряжение ячейки (отключение всей нагрузки)
#define CONFIG_BATTARY_LOW_CRITIC_LIMIT_VOLTAGE_CELL	2.50	// Критически низкое напряжение (самоотключение системы)
#define CONFIG_BATTARY_LOW_RECONNECT_VOLTAGE_CELL		3.00	// Напряжения снятия флага ошибки переразряда

#define CONFIG_BATTARY_TOLERANT_HIGH_VOLTAGE_CELL_TIME	1000	// Время задержки срабатывания защиты по высокому напряжению (милисек.)
#define CONFIG_BATTARY_TOLERANT_LOW_VOLTAGE_CELL_TIME	3000	// Время задержки срабатывания защиты по низкому напряжению (милисек.)

#define CONFIG_BATTARY_HIGHT_LIMIT_TEMPERATURE_CARGE	55		// Максимально допустимая температура батареи при зарядке
#define CONFIG_BATTARY_HIGHT_RECON_TEMPERATURE_CARGE	50		// Температура переподключения после перегрева при заряде
#define CONFIG_BATTARY_LOW_LIMIT_TEMPERATURE_CARGE		0		// Минимально допустимая температура батареи при зарядке
#define CONFIG_BATTARY_LOW_RECON_TEMPERATURE_CARGE		1		// Температура переподключения после нижнего предела при заряде
#define CONFIG_BATTARY_HIGHT_LIMIT_TEMPERATURE_LOAD		55		// Максимально допустимая температура батареи при разряде
#define CONFIG_BATTARY_HIGHT_RECON_TEMPERATURE_LOAD		50		// Температура переподключения после перегрева при разряде
#define CONFIG_BATTARY_LOW_LIMIT_TEMPERATURE_LOAD		-22		// Минимально допустимая температура батареи при разряде
#define CONFIG_BATTARY_LOW_RECON_TEMPERATURE_LOAD		-20		// Температура переподключения после нижнего предела при разряде

#define CONFIG_BATTARY_MAX_CURRENT_LOAD					300		// Максимальный долговременный ток разряда( более DELAY сек )
#define CONFIG_BATTARY_MAX_CURRENT_LOAD_DELAY			5000	// Время в милесек. разрещенное использовать ток больше MAX
#define CONFIG_BATTARY_MAX_CURRENT_CARGE				CONFIG_CAPACITOR_CELL/2		// Максимальный долговременный ток заряда

//=======================================================================================================================
//CHARGER
#define CONFIG_TIMEOUT_CONTROL_CHARGER_LOOP 			1000	// мсек.

#define CONFIG_CHARGE_NUM_CELLS 						CONFIG_NUM_CELLS
#define CONFIG_CHARGE_V_THRESHOLD_SLOW_CHARGING 		3.00	// Порог переключения из медленной зарядки в стандартное
#define CONFIG_CHARGE_V_SLOW_CHARGING 					3.60	// Напряжение медленной зарядки
#define CONFIG_CHARGE_I_SLOW_CHARGING 					25.00	// Ток медленной зарядки
#define CONFIG_CHARGE_V_THRESHOLD_NOMINAL_CHARGING 		3.55	// Предельное напряжение зарядки (100%)
#define CONFIG_CHARGE_V_BOOST_CHARGING 					3.60	// Напряжение стандартной зарядки
#define CONFIG_CHARGE_I_BOOST_CHARGING 					100.00	// Ток стандартной зарядки
#define CONFIG_CHARGE_DIV_THROTTL		 				0.50	// Множетель тока при режиме тротлинга
#define CONFIG_CHARGE_V_FLOAT_CHARGING 					3.60	// Напряжение добавочного режима зарядки
#define CONFIG_CHARGE_I_FLOAT_CHARGING 					15.00	// Ток добавочного режима зарядки
#define CONFIG_CHARGE_V_SUPPORT 						3.45	// Напряжение поддерживаемого режима зарядки
#define CONFIG_CHARGE_I_SUPPORT 						2		// Ток поддерживаемого режима зарядки
#define CONFIG_CHARGE_V_RECONECT_NOMINAL_CHARGING 		3.35	// Напряжение переподключение стандартного режима зарядки
#define CONFIG_CHARGE_V_RECONECT_OUT12_CHARGING 		3.45	// Напряжение переподключение напрвления зарядки на силовых выводах 12В

#define CONFIG_CHARGE_SPEED_SET_I_BY_REGULATOR 			10		// Скорость изменния тока на зарядном устройстве (Ампер\сек)

#define CONFIG_CHARGE_COEFF_I_TEMPERATURE_MIN_0C 		0.01	// Минимальный множетель тока зарядки в температурном диапазоне от мин до 0 градусов
#define CONFIG_CHARGE_COEFF_I_TEMPERATURE_0С_15C 		0.33	// Минимальный множетель тока зарядки в температурном диапазоне от 0 до 15 градусов
#define CONFIG_CHARGE_COEFF_I_TEMPERATURE_15С_45C 		1		// Постоянный множетель тока зарядки в температурном диапазоне от 15 до 45 градусов
#define CONFIG_CHARGE_COEFF_I_TEMPERATURE_45С_MAX 		0.33	// Минимальный множетель тока зарядки в температурном диапазоне от 45 до макс

#define	CONFIG_CHARGER_OVERHIGH_LIMIT_TEMPERATURE		85		// Критическая температура радиатора(железа) модуля зарядки
#define	CONFIG_CHARGER_OVERHIGH_RECONNECT_TEMPERATURE	75		// Температура переподключения после срабатывания ащиты
#define CONFIG_CHARGE_LIMIT_THROTTL_TEMPERATURE 		81		// Градусы температуры при которых начинается тротлинг
#define CONFIG_CHARGE_DISABLE_THROTTL_TEMPERATURE 		70		// Градусы температуры при которых прекращается тротлинг

//=======================================================================================================================
//INVERTOR
#define CONFIG_TIMEOUT_CONTROL_INVERTOR_LOOP 			500		// мсек.
#define CONFIG_INVERTOR_SWITCH_TACT 					0		// 1 - управление тактовым сигналом, 0-постоянным лог уровнем
#define CONFIG_INVERTOR_ERROR_CONTROL_PORT 				0		// 1 - Переход в ошибку по внешнему триггеру

#define	CONFIG_INVERTOR_OVERHIGH_LIMIT_TEMPERATURE		85		// Критическая температура радиатора(железа) модуля инвертора
#define	CONFIG_INVERTOR_OVERHIGH_RECONNECT_TEMPERATURE	75		// Температура переподключения после срабатывания ащиты
//=======================================================================================================================
//OUT12
#define CONFIG_TIMEOUT_CONTROL_OUT12_LOOP 				500		// мсек.

#define	CONFIG_OUT12_OVERHIGH_LIMIT_TEMPERATURE			85		// Критическая температура радиатора(железа) транзисторов ключа
#define	CONFIG_OUT12_OVERHIGH_RECONNECT_TEMPERATURE		75		// Температура переподключения после срабатывания ащиты
//=======================================================================================================================
//DC-DC STEP-UP for USB out
#define CONFIG_TIMEOUT_CONTROL_USB_LOOP 				500		// мсек.

#define	CONFIG_DCDCUSB_OVERHIGH_LIMIT_TEMPERATURE		85		// Критическая температура радиатора(железа) модуля преобразователя
#define	CONFIG_DCDCUSB_OVERHIGH_RECONNECT_TEMPERATURE	75		// Температура переподключения после срабатывания ащиты
//=======================================================================================================================
//HEATER
#define CONFIG_TIMEOUT_CONTROL_HEATER_LOOP 				1000	// мсек.

//******************************************************** SERVICES *****************************************************
//=======================================================================================================================
//TEMPER
#define CONFIG_TIMEOUT_CONTROL_TEMPERATURE 				1000	// мсек. Частота калькуляции всех сенсоров температуры

//=======================================================================================================================
//=======================================================================================================================
#endif /* CONFIG_H_ */
