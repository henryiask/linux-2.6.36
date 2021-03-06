/* This is an autogenerated file */
/* Tag: noCheckHeader */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2009. All rights reserved. */
/* */
/*   Refer to LICENSE.txt included with this source for details on the */
/*   license terms. */

#ifndef __PALDATA_CTRL_SAP_H__
#define __PALDATA_CTRL_SAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/* ------------------------------------------ */
extern void paldata_pal_ctrl_activate_req(FsmContext* context,
                                          void* appHandle);

extern void paldata_pal_ctrl_deactivate_req(FsmContext* context,
                                            void* appHandle);

extern void paldata_pal_ctrl_event_mask_set_req(FsmContext* context,
                                                void* appHandle,
                                                CsrUint32 indMask);

extern void paldata_pal_ctrl_failed_contact_counter_read_req(FsmContext* context,
                                                             void* appHandle,
                                                             CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_failed_contact_counter_reset_req(FsmContext* context,
                                                              void* appHandle,
                                                              CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_link_alive_req(FsmContext* context,
                                            void* appHandle,
                                            CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_create_req(FsmContext* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle,
                                             CsrUint8 physicalLinkHandle,
                                             CsrUint16 userPriority,
                                             const unifi_MACAddress *remoteMacAddress,
                                             const unifi_MACAddress *localMacAddress,
                                             const unifi_AmpFlowSpec *txFlowSpec);

extern void paldata_pal_ctrl_link_delete_req(FsmContext* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle,
                                             CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_flush_req(FsmContext* context,
                                            void* appHandle,
                                            CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_link_modify_req(FsmContext* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle,
                                             const unifi_AmpFlowSpec *txFlowSpec);

extern void paldata_pal_ctrl_link_supervision_timeout_delete_req(FsmContext* context,
                                                                 void* appHandle,
                                                                 CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_supervision_timeout_modify_req(FsmContext* context,
                                                                 void* appHandle,
                                                                 CsrUint8 physicalLinkHandle,
                                                                 CsrUint16 linkSupervisionTimeout);

extern void paldata_pal_ctrl_link_supervision_timeout_set_req(FsmContext* context,
                                                              void* appHandle,
                                                              CsrUint8 physicalLinkHandle,
                                                              CsrUint16 linkSupervisionTimeout);

extern void paldata_pal_ctrl_register_req(FsmContext* context,
                                          void* appHandle,
                                          CsrUint8 ampId,
                                          CsrUint16 dataQid);


/* ------------------------------------------ */
extern void paldata_pal_ctrl_activate_cfm(void* context,
                                          void* appHandle,
                                          CsrUint16 numDataBlocks);

extern void paldata_pal_ctrl_deactivate_cfm(void* context,
                                            void* appHandle);

extern void paldata_pal_ctrl_early_link_loss_ind(void* context,
                                                 void* appHandle,
                                                 CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_event_mask_set_cfm(void* context,
                                                void* appHandle);

extern void paldata_pal_ctrl_failed_contact_counter_read_cfm(void* context,
                                                             void* appHandle,
                                                             CsrUint16 logicalLinkHandle,
                                                             CsrUint16 failedContactCounter);

extern void paldata_pal_ctrl_failed_contact_counter_reset_cfm(void* context,
                                                              void* appHandle,
                                                              CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_link_create_cfm(void* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_link_delete_cfm(void* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle,
                                             CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_flush_cfm(void* context,
                                            void* appHandle,
                                            CsrUint16 logicalLinkHandle,
                                            CsrBool flushOccured);

extern void paldata_pal_ctrl_link_lost_ind(void* context,
                                           void* appHandle,
                                           CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_modify_cfm(void* context,
                                             void* appHandle,
                                             CsrUint16 logicalLinkHandle);

extern void paldata_pal_ctrl_link_supervision_timeout_delete_cfm(void* context,
                                                                 void* appHandle,
                                                                 CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_supervision_timeout_modify_cfm(void* context,
                                                                 void* appHandle,
                                                                 CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_link_supervision_timeout_set_cfm(void* context,
                                                              void* appHandle,
                                                              CsrUint8 physicalLinkHandle);

extern void paldata_pal_ctrl_register_cfm(void* context,
                                          void* appHandle);




#ifdef __cplusplus
}
#endif

#endif /* __PALDATA_CTRL_SAP_H__ */
