#ifndef _VS043ISN26V10_480x272_H
#define _VS043ISN26V10_480x272_H

#include "mi_panel.h"
#include "mi_panel_datatype.h"

MI_PANEL_ParamConfig_t stPanelParam =
{
    "VS043ISN26V10_480x272",    //const char *pPanelName; ///<  PanelName
    0,                    //MI_U8             MI_U8Dither;         ///<  Diether On?off
    E_MI_PNL_LINK_TTL, //MIPnlLinkType_e eLinkType;     ///<  Panel LinkType

    0,        //MI_U8 MI_U8DualPort      :1;          ///<  DualPort on/off
    0,        //MI_U8 MI_U8SwapPort      :1;          ///<  Swap Port on/off
    0,        //MI_U8 MI_U8SwapOdd_ML    :1;          ///<  Swap Odd ML
    0,        //MI_U8 MI_U8SwapEven_ML   :1;          ///<  Swap Even ML
    0,        //MI_U8 MI_U8SwapOdd_RB    :1;          ///<  Swap Odd RB
    0,        //MI_U8 MI_U8SwapEven_RB   :1;          ///<  Swap Even RB

    1,        //MI_U8 MI_U8SwapLVDS_POL  :1;          ///<  Swap LVDS Channel Polairyt
    1,        //MI_U8 MI_U8SwapLVDS_CH   :1;          ///<  Swap LVDS channel
    0,        //MI_U8 MI_U8PDP10BIT      :1;          ///<  PDP 10bits on/off
    1,        //MI_U8 MI_U8LVDS_TI_MODE  :1;          ///<  Ti Mode On/Off


    0,        //MI_U8 MI_U8DCLKDelay;                 ///<  DCLK Delay
    0,        //MI_U8 MI_U8InvDCLK   :1;              ///<  CLK Invert
    0,        //MI_U8 MI_U8InvDE     :1;              ///<  DE Invert
    0,        //MI_U8 MI_U8InvHSync  :1;              ///<  HSync Invert
    0,        //MI_U8 MI_U8InvVSync  :1;              ///<  VSync Invert

    0x01,     //MI_U8 MI_U8DCKLCurrent;              ///< PANEL_DCLK_CURRENT
    0x01,     //MI_U8 MI_U8DECurrent;                ///< PANEL_DE_CURRENT
    0x01,     //MI_U8 MI_U8ODDDataCurrent;           ///< PANEL_ODD_DATA_CURRENT
    0x01,     //MI_U8 MI_U8EvenDataCurrent;          ///< PANEL_EVEN_DATA_CURRENT

    30,       //u16 u16OnTiming1;                ///<  time between panel & data while turn on power
    400,      //u16 u16OnTiming2;                ///<  time between data & back light while turn on power
    80,       //u16 u16OffTiming1;               ///<  time between back light & data while turn off power
    30,       //u16 u16OffTiming2;               ///<  time between data & panel while turn off power

    4,        //u16 u16HSyncWidth;               ///<  Hsync Width
    40,       //u16 u16HSyncBackPorch;           ///<  Hsync back porch

    4,       //u16 u16VSyncWidth;               ///<  Vsync width
    12,      //u16 u16VSyncBackPorch;           ///<  Vsync back porch

    0,       //u16 u16HStart;                   ///<  HDe start
    0,        //u16 u16VStart;                   ///<  VDe start
    480,      //u16 u16Width;                    ///<  Panel Width
    272,     //u16 u16Height;                   ///<  Panel Height

    598,      //u16 u16MaxHTotal;                ///<  Max H Total
    531,      //u16 u16HTotal;                   ///<  H Total
    485,      //u16 u16MinHTotal;                ///<  Min H Total

    321,     //u16 u16MaxVTotal;                ///<  Max V Total
    292,     //u16 u16VTotal;                   ///<  V Total
    276,     //u16 u16MinVTotal;                ///<  Min V Total

    12,       //u16 u16MaxDCLK;                  ///<  Max DCLK
    9,       //u16 u16DCLK;                     ///<  DCLK ( Htt * Vtt * Fps)
    8,       //u16 u16MinDCLK;                  ///<  Min DCLK

    0x0019,    //u16 u16SpreadSpectrumStep;       ///<  Step of SSC
    0x00C0,    //u16 u16SpreadSpectrumSpan;       ///<  Span of SSC

    0xA0,      //MI_U8 MI_U8DimmingCtl;                 ///<  Dimming Value
    0xFF,      //MI_U8 MI_U8MaxPWMVal;                  ///<  Max Dimming Value
    0x50,      //MI_U8 MI_U8MinPWMVal;                  ///<  Min Dimming Value

    0,                            //MI_U8 MI_U8DeinterMode   :1;                  ///<  DeInter Mode
    E_MI_PNL_ASPECT_RATIO_WIDE, //MIPnlAspectRatio_e ePanelAspectRatio; ///<  Aspec Ratio

    0,                            //u16 u16LVDSTxSwapValue;         // LVDS Swap Value
    E_MI_PNL_TI_8BIT_MODE,      //MIPnlTiBitMode_e eTiBitMode;  // Ti Bit Mode
    E_MI_PNL_OUTPUT_10BIT_MODE, //MIPnlOutputFormatBitMode_e eOutputFormatBitMode;

    0,        //MI_U8 MI_U8SwapOdd_RG    :1;          ///<  Swap Odd RG
    0,        //MI_U8 MI_U8SwapEven_RG   :1;          ///<  Swap Even RG
    0,        //MI_U8 MI_U8SwapOdd_GB    :1;          ///<  Swap Odd GB
    0,        //MI_U8 MI_U8SwapEven_GB   :1;          ///<  Swap Even GB

    0,        //MI_U8 MI_U8DoubleClk     :1;                      ///<  Double CLK On/off
    0x1C848E, //u32 u32MaxSET;                              ///<  Max Lpll Set
    0x18EB59, //u32 u32MinSET;                              ///<  Min Lpll Set
    E_MI_PNL_CHG_HTOTAL, //MIPnlOutputTimingMode_e eOutTimingMode;   ///<  Define which panel output timing change mode is used to change VFreq for same panel
    0,                     //MI_U8 MI_U8NoiseDith     :1;                      ///<  Noise Dither On/Off
    E_MI_PNL_CH_SWAP_2,
    E_MI_PNL_CH_SWAP_4,
    E_MI_PNL_CH_SWAP_3,
    E_MI_PNL_CH_SWAP_1,
    E_MI_PNL_CH_SWAP_0,
};

MI_PANEL_MipiDsiConfig_t stMipiDsiConfig=
{
    //NA
};
#endif
