#pragma once

int ID6001Fun_SetIoParameter_1_sub_804BEA6(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6002Fun_SetEcuBaudRate_1_sub_804C234(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6003Fun_SetEcuCommTimeInterval_1_sub_804C39A(int a1, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6004Fun_SetLinkData_1_sub_804C4CA(int a1, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6005_Set5BpsParameter_1_sub_8022EB0(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6006Fun_SetBosch_1_sub_80215FA(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6007Fun_SetCommunicationLineVoltage_1_sub_804C946(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6008_SetBoschLink_1_Fun_sub_804CBC0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6009Fun_BoschFiat_1_sub_8024570(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID600AFun_SetAddressFiat_1_sub_8024694(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID600B_SetLinkNoAnswer_1_sub_804CA4C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID600C_SetCANBusLinkData_1_sub_804C9BA(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID600DFun_SetCANBus2LinkData_1_sub_804C9CE(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID600E_sub_804CA0C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6011_LandroverABSEnter_1_sub_802423C(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6014FunShangHuanBoschSystem_1_sub_8023FC4(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6015Fun_FiatBoschSystem_1_sub_80227CC(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6016FunBenz38SelectLine_1_sub_804CC78(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6017Fun_SetMitLinkKeep_sub_804CE88(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6018_SetEnterFrameData_1_sub_8037060(int argc, unsigned __int8 *argv, unsigned __int8 *Ans);
int ID6019Fun_SetConnectorBaudRate_1_sub_804CF62(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601A_SendAddressCodeTimeAdjustable_1_sub_8021FE4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601B_SetBenzHMFLinkKeep_1_sub_804CF70(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601C_AddressCodeWayAdjustTime_benz_1_sub_802371C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601D_AddressCodeCommunicationWay_Lline_1_sub_8023CF4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601EFun_SelectMultiIoLine_sub_804D040(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID601F_SetEnterFrameDataExt_1_sub_80370D6(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6020Fun_GetBoxInfo_sub_804D04E(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6021_GetDownloadType_sub_804D1C0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6022_sub_804D1DC(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6023_sub_802AB34(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6024Fun_sub_802AD94(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6025Fun_sub_804D64E(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6026Fun_sub_804D69E(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6028Fun_sub_804D78C(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID602D_Fun_sub_804D6F2(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID602E_sub_804D3E0(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID602F_sub_804D4F8(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6101_sub_80292C4(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6102_sub_8024E98(int Argc, unsigned __int8 *Argv, unsigned __int8 *Ans);
int ID6104FunOnlySendToEcu_1_sub_8023BB4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6105Funsub_805383C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6106_sub_8022594(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6107_ISO_SendDataToEcuGetMultiFrameAnswer_1_sub_8026F6E(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6109FunKWPSendDataToEcuGetAnswer_1_sub_802606E(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ReceiveOneKwpFrameFromECU_sub_802E188(unsigned __int8 *buff, unsigned int *size, __int16 overtime, _BYTE *speci_data);
int ID610A_BoschSendDataToEcuGetMultiFrameAnswer_1_sub_8022C14(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID610B_KWPSendOneAndReceiveMultiFrame_1_sub_8026230(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID610C_PWM_SendDataToEcuGetAnswer_1_sub_8051266(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID610EFun_VpwSendOneAndReceiveOneFrame_1sub_8050F60(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID610F_BoschSendDataToEcuGetAnswer_1_sub_8022AB4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6110_ISO_SendDataToEcuGetAnswer_1_sub_80270FE(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6111_SendOneFrameDataToEcuGetAnyFrameAnswer_1_sub_8027594(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6112Fun_PwmSendOneAndReceiveMultiFrame_1_sub_8051460(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6113_CanbusOnlySendDataToEcu_1_sub_8028506(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6116FunFordIsoSendOneAndReceiveMultiFrame_1_sub_80277DC(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6117Fun_HoldenNormalRingLinkSendOneAndOneFrame_1_sub_8027970(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6118FunHoldenOnlyKnowHeadOfFrame_1__sub_8027C20(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6119_SubruOldProtocol_1_sub_8027EF8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611A_sub_8028184(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611B_Fun_VPW_HDN_SendDataToEcuGetMultiFrameAnswer_1_sub_805166C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611C_Fun_SendOneFrameDataToEcuGetAnyFrameAnswer_Check_1_sub_80282D0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611D_VPW_HDN_SendDataToEcuGetMultiFrameAnswer_1_sub_80516EA(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611E_sub_802A530(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID611F_HoldenCan20SendOneFrameReceiveDatas_1_sub_8037154(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6120_JAGUARPWM_SendDataToEcuGetMultiFrameAnswer_1_sub_8051586(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6121_WabcoAbsSendOneAndReicveOneFrame_1_sub_80218F0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6122_WabcoAbsSendOneAndReicveMultiFrame_1_sub_8021A92(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6126_OneToOne_SendLongDataToEcuGetLongAnswer_1_sub_8021DF8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6127_VpwSendMultiFrameAndReceiveMultiFrameKnownAckFrameNumber_1_sub_80510C0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6128_OneToOne_SendOneByteToEcuGetAnswerLM_1_sub_80272B8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6129_KWPSendOneAndReceiveMultiFrameHasFilter_1_sub_80273FA(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID612B_sub_802A3BC(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID612D_sub_803B2A0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID612E_sub_803B8EC(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6201_Can20SendTwoFrameQuickGetInfo_1_sub_8038784(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6202_sub_8038974(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6203_sub_80372C8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6204_sub_8037934(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6205_VWCANSendDataToEcuGetMultiFrameAnswer1_1_sub_803814C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6206_sub_802892A(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6207_sub_8039C8C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6208_sub_8021008(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID620A_sub_8028592(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID620B_LandroverSendAndReceiveFault_1_sub_8028D14(int a1, unsigned __int8 *a2, _BYTE *ans);
int ID620E_sub_8028F84(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID620F_sub_8028B98(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6210_sub_8026480(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6211_sub_80265D8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6212_sub_8038E0C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6213_sub_802675C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6217_sub_8039144(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6218_sub_80286E4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6219_sub_804D740(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID621F_sub_802694C(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6220_KWP_SendDataToEcuGetAnswer_Benz_1_sub_8026C32(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6221_KWP_SendDataToEcuGetMultiFrameAnswer_Benz_1_sub_80287F4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6222_SendOneFrameToEcuGetMultiFrameAnswer_1_sub_803A008(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6223_sub_8026DB0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6224_sub_8039550(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6226_sub_8039914(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6227_sub_8053E00(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6228_sub_803ADF4(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID6229_sub_803A3B0(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID622A_sub_802AF50(int argc, unsigned __int8 *argv, unsigned __int8 *ans);
int ID622C_sub_803AFF8(int argc, unsigned __int8 *argv, unsigned __int8 *ans);