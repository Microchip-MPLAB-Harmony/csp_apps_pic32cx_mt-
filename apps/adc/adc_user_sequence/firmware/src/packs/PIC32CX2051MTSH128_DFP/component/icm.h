/*
 * Component description for ICM
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2022-07-26T09:53:39Z */
#ifndef _PIC32CXMTSH_ICM_COMPONENT_H_
#define _PIC32CXMTSH_ICM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR ICM                                          */
/* ************************************************************************** */

/* -------- ICM_CFG : (ICM Offset: 0x00) (R/W 32) Configuration Register -------- */
#define ICM_CFG_WBDIS_Pos                     _UINT32_(0)                                          /* (ICM_CFG) Write-Back Disable Position */
#define ICM_CFG_WBDIS_Msk                     (_UINT32_(0x1) << ICM_CFG_WBDIS_Pos)                 /* (ICM_CFG) Write-Back Disable Mask */
#define ICM_CFG_WBDIS(value)                  (ICM_CFG_WBDIS_Msk & (_UINT32_(value) << ICM_CFG_WBDIS_Pos)) /* Assigment of value for WBDIS in the ICM_CFG register */
#define ICM_CFG_EOMDIS_Pos                    _UINT32_(1)                                          /* (ICM_CFG) End of Monitoring Disable Position */
#define ICM_CFG_EOMDIS_Msk                    (_UINT32_(0x1) << ICM_CFG_EOMDIS_Pos)                /* (ICM_CFG) End of Monitoring Disable Mask */
#define ICM_CFG_EOMDIS(value)                 (ICM_CFG_EOMDIS_Msk & (_UINT32_(value) << ICM_CFG_EOMDIS_Pos)) /* Assigment of value for EOMDIS in the ICM_CFG register */
#define ICM_CFG_SLBDIS_Pos                    _UINT32_(2)                                          /* (ICM_CFG) Secondary List Branching Disable Position */
#define ICM_CFG_SLBDIS_Msk                    (_UINT32_(0x1) << ICM_CFG_SLBDIS_Pos)                /* (ICM_CFG) Secondary List Branching Disable Mask */
#define ICM_CFG_SLBDIS(value)                 (ICM_CFG_SLBDIS_Msk & (_UINT32_(value) << ICM_CFG_SLBDIS_Pos)) /* Assigment of value for SLBDIS in the ICM_CFG register */
#define ICM_CFG_BBC_Pos                       _UINT32_(4)                                          /* (ICM_CFG) Bus Burden Control Position */
#define ICM_CFG_BBC_Msk                       (_UINT32_(0xF) << ICM_CFG_BBC_Pos)                   /* (ICM_CFG) Bus Burden Control Mask */
#define ICM_CFG_BBC(value)                    (ICM_CFG_BBC_Msk & (_UINT32_(value) << ICM_CFG_BBC_Pos)) /* Assigment of value for BBC in the ICM_CFG register */
#define ICM_CFG_ASCD_Pos                      _UINT32_(8)                                          /* (ICM_CFG) Automatic Switch To Compare Digest Position */
#define ICM_CFG_ASCD_Msk                      (_UINT32_(0x1) << ICM_CFG_ASCD_Pos)                  /* (ICM_CFG) Automatic Switch To Compare Digest Mask */
#define ICM_CFG_ASCD(value)                   (ICM_CFG_ASCD_Msk & (_UINT32_(value) << ICM_CFG_ASCD_Pos)) /* Assigment of value for ASCD in the ICM_CFG register */
#define ICM_CFG_DUALBUFF_Pos                  _UINT32_(9)                                          /* (ICM_CFG) Dual Input Buffer Position */
#define ICM_CFG_DUALBUFF_Msk                  (_UINT32_(0x1) << ICM_CFG_DUALBUFF_Pos)              /* (ICM_CFG) Dual Input Buffer Mask */
#define ICM_CFG_DUALBUFF(value)               (ICM_CFG_DUALBUFF_Msk & (_UINT32_(value) << ICM_CFG_DUALBUFF_Pos)) /* Assigment of value for DUALBUFF in the ICM_CFG register */
#define ICM_CFG_UIHASH_Pos                    _UINT32_(12)                                         /* (ICM_CFG) User Initial Hash Value Position */
#define ICM_CFG_UIHASH_Msk                    (_UINT32_(0x1) << ICM_CFG_UIHASH_Pos)                /* (ICM_CFG) User Initial Hash Value Mask */
#define ICM_CFG_UIHASH(value)                 (ICM_CFG_UIHASH_Msk & (_UINT32_(value) << ICM_CFG_UIHASH_Pos)) /* Assigment of value for UIHASH in the ICM_CFG register */
#define ICM_CFG_UALGO_Pos                     _UINT32_(13)                                         /* (ICM_CFG) User SHA Algorithm Position */
#define ICM_CFG_UALGO_Msk                     (_UINT32_(0x7) << ICM_CFG_UALGO_Pos)                 /* (ICM_CFG) User SHA Algorithm Mask */
#define ICM_CFG_UALGO(value)                  (ICM_CFG_UALGO_Msk & (_UINT32_(value) << ICM_CFG_UALGO_Pos)) /* Assigment of value for UALGO in the ICM_CFG register */
#define   ICM_CFG_UALGO_SHA1_Val              _UINT32_(0x0)                                        /* (ICM_CFG) SHA1 algorithm processed  */
#define   ICM_CFG_UALGO_SHA256_Val            _UINT32_(0x1)                                        /* (ICM_CFG) SHA256 algorithm processed  */
#define   ICM_CFG_UALGO_SHA384_Val            _UINT32_(0x2)                                        /* (ICM_CFG) SHA384 algorithm processed  */
#define   ICM_CFG_UALGO_SHA512_Val            _UINT32_(0x3)                                        /* (ICM_CFG) SHA512 algorithm processed  */
#define   ICM_CFG_UALGO_SHA224_Val            _UINT32_(0x4)                                        /* (ICM_CFG) SHA224 algorithm processed  */
#define ICM_CFG_UALGO_SHA1                    (ICM_CFG_UALGO_SHA1_Val << ICM_CFG_UALGO_Pos)        /* (ICM_CFG) SHA1 algorithm processed Position  */
#define ICM_CFG_UALGO_SHA256                  (ICM_CFG_UALGO_SHA256_Val << ICM_CFG_UALGO_Pos)      /* (ICM_CFG) SHA256 algorithm processed Position  */
#define ICM_CFG_UALGO_SHA384                  (ICM_CFG_UALGO_SHA384_Val << ICM_CFG_UALGO_Pos)      /* (ICM_CFG) SHA384 algorithm processed Position  */
#define ICM_CFG_UALGO_SHA512                  (ICM_CFG_UALGO_SHA512_Val << ICM_CFG_UALGO_Pos)      /* (ICM_CFG) SHA512 algorithm processed Position  */
#define ICM_CFG_UALGO_SHA224                  (ICM_CFG_UALGO_SHA224_Val << ICM_CFG_UALGO_Pos)      /* (ICM_CFG) SHA224 algorithm processed Position  */
#define ICM_CFG_HAPROT_Pos                    _UINT32_(16)                                         /* (ICM_CFG) Region Hash Area Protection Position */
#define ICM_CFG_HAPROT_Msk                    (_UINT32_(0x3F) << ICM_CFG_HAPROT_Pos)               /* (ICM_CFG) Region Hash Area Protection Mask */
#define ICM_CFG_HAPROT(value)                 (ICM_CFG_HAPROT_Msk & (_UINT32_(value) << ICM_CFG_HAPROT_Pos)) /* Assigment of value for HAPROT in the ICM_CFG register */
#define ICM_CFG_DAPROT_Pos                    _UINT32_(24)                                         /* (ICM_CFG) Region Descriptor Area Protection Position */
#define ICM_CFG_DAPROT_Msk                    (_UINT32_(0x3F) << ICM_CFG_DAPROT_Pos)               /* (ICM_CFG) Region Descriptor Area Protection Mask */
#define ICM_CFG_DAPROT(value)                 (ICM_CFG_DAPROT_Msk & (_UINT32_(value) << ICM_CFG_DAPROT_Pos)) /* Assigment of value for DAPROT in the ICM_CFG register */
#define ICM_CFG_Msk                           _UINT32_(0x3F3FF3F7)                                 /* (ICM_CFG) Register Mask  */


/* -------- ICM_CTRL : (ICM Offset: 0x04) ( /W 32) Control Register -------- */
#define ICM_CTRL_ENABLE_Pos                   _UINT32_(0)                                          /* (ICM_CTRL) ICM Enable Position */
#define ICM_CTRL_ENABLE_Msk                   (_UINT32_(0x1) << ICM_CTRL_ENABLE_Pos)               /* (ICM_CTRL) ICM Enable Mask */
#define ICM_CTRL_ENABLE(value)                (ICM_CTRL_ENABLE_Msk & (_UINT32_(value) << ICM_CTRL_ENABLE_Pos)) /* Assigment of value for ENABLE in the ICM_CTRL register */
#define ICM_CTRL_DISABLE_Pos                  _UINT32_(1)                                          /* (ICM_CTRL) ICM Disable Register Position */
#define ICM_CTRL_DISABLE_Msk                  (_UINT32_(0x1) << ICM_CTRL_DISABLE_Pos)              /* (ICM_CTRL) ICM Disable Register Mask */
#define ICM_CTRL_DISABLE(value)               (ICM_CTRL_DISABLE_Msk & (_UINT32_(value) << ICM_CTRL_DISABLE_Pos)) /* Assigment of value for DISABLE in the ICM_CTRL register */
#define ICM_CTRL_SWRST_Pos                    _UINT32_(2)                                          /* (ICM_CTRL) Software Reset Position */
#define ICM_CTRL_SWRST_Msk                    (_UINT32_(0x1) << ICM_CTRL_SWRST_Pos)                /* (ICM_CTRL) Software Reset Mask */
#define ICM_CTRL_SWRST(value)                 (ICM_CTRL_SWRST_Msk & (_UINT32_(value) << ICM_CTRL_SWRST_Pos)) /* Assigment of value for SWRST in the ICM_CTRL register */
#define ICM_CTRL_REHASH_Pos                   _UINT32_(4)                                          /* (ICM_CTRL) Recompute Internal Hash Position */
#define ICM_CTRL_REHASH_Msk                   (_UINT32_(0xF) << ICM_CTRL_REHASH_Pos)               /* (ICM_CTRL) Recompute Internal Hash Mask */
#define ICM_CTRL_REHASH(value)                (ICM_CTRL_REHASH_Msk & (_UINT32_(value) << ICM_CTRL_REHASH_Pos)) /* Assigment of value for REHASH in the ICM_CTRL register */
#define ICM_CTRL_RMDIS_Pos                    _UINT32_(8)                                          /* (ICM_CTRL) Region Monitoring Disable Position */
#define ICM_CTRL_RMDIS_Msk                    (_UINT32_(0xF) << ICM_CTRL_RMDIS_Pos)                /* (ICM_CTRL) Region Monitoring Disable Mask */
#define ICM_CTRL_RMDIS(value)                 (ICM_CTRL_RMDIS_Msk & (_UINT32_(value) << ICM_CTRL_RMDIS_Pos)) /* Assigment of value for RMDIS in the ICM_CTRL register */
#define ICM_CTRL_RMEN_Pos                     _UINT32_(12)                                         /* (ICM_CTRL) Region Monitoring Enable Position */
#define ICM_CTRL_RMEN_Msk                     (_UINT32_(0xF) << ICM_CTRL_RMEN_Pos)                 /* (ICM_CTRL) Region Monitoring Enable Mask */
#define ICM_CTRL_RMEN(value)                  (ICM_CTRL_RMEN_Msk & (_UINT32_(value) << ICM_CTRL_RMEN_Pos)) /* Assigment of value for RMEN in the ICM_CTRL register */
#define ICM_CTRL_Msk                          _UINT32_(0x0000FFF7)                                 /* (ICM_CTRL) Register Mask  */


/* -------- ICM_SR : (ICM Offset: 0x08) ( R/ 32) Status Register -------- */
#define ICM_SR_ENABLE_Pos                     _UINT32_(0)                                          /* (ICM_SR) ICM Enable Register Position */
#define ICM_SR_ENABLE_Msk                     (_UINT32_(0x1) << ICM_SR_ENABLE_Pos)                 /* (ICM_SR) ICM Enable Register Mask */
#define ICM_SR_ENABLE(value)                  (ICM_SR_ENABLE_Msk & (_UINT32_(value) << ICM_SR_ENABLE_Pos)) /* Assigment of value for ENABLE in the ICM_SR register */
#define ICM_SR_RAWRMDIS_Pos                   _UINT32_(8)                                          /* (ICM_SR) Region Monitoring Disabled Raw Status Position */
#define ICM_SR_RAWRMDIS_Msk                   (_UINT32_(0xF) << ICM_SR_RAWRMDIS_Pos)               /* (ICM_SR) Region Monitoring Disabled Raw Status Mask */
#define ICM_SR_RAWRMDIS(value)                (ICM_SR_RAWRMDIS_Msk & (_UINT32_(value) << ICM_SR_RAWRMDIS_Pos)) /* Assigment of value for RAWRMDIS in the ICM_SR register */
#define ICM_SR_RMDIS_Pos                      _UINT32_(12)                                         /* (ICM_SR) Region Monitoring Disabled Status Position */
#define ICM_SR_RMDIS_Msk                      (_UINT32_(0xF) << ICM_SR_RMDIS_Pos)                  /* (ICM_SR) Region Monitoring Disabled Status Mask */
#define ICM_SR_RMDIS(value)                   (ICM_SR_RMDIS_Msk & (_UINT32_(value) << ICM_SR_RMDIS_Pos)) /* Assigment of value for RMDIS in the ICM_SR register */
#define ICM_SR_Msk                            _UINT32_(0x0000FF01)                                 /* (ICM_SR) Register Mask  */


/* -------- ICM_IER : (ICM Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define ICM_IER_RHC_Pos                       _UINT32_(0)                                          /* (ICM_IER) Region Hash Completed Interrupt Enable Position */
#define ICM_IER_RHC_Msk                       (_UINT32_(0xF) << ICM_IER_RHC_Pos)                   /* (ICM_IER) Region Hash Completed Interrupt Enable Mask */
#define ICM_IER_RHC(value)                    (ICM_IER_RHC_Msk & (_UINT32_(value) << ICM_IER_RHC_Pos)) /* Assigment of value for RHC in the ICM_IER register */
#define ICM_IER_RDM_Pos                       _UINT32_(4)                                          /* (ICM_IER) Region Digest Mismatch Interrupt Enable Position */
#define ICM_IER_RDM_Msk                       (_UINT32_(0xF) << ICM_IER_RDM_Pos)                   /* (ICM_IER) Region Digest Mismatch Interrupt Enable Mask */
#define ICM_IER_RDM(value)                    (ICM_IER_RDM_Msk & (_UINT32_(value) << ICM_IER_RDM_Pos)) /* Assigment of value for RDM in the ICM_IER register */
#define ICM_IER_RBE_Pos                       _UINT32_(8)                                          /* (ICM_IER) Region Bus Error Interrupt Enable Position */
#define ICM_IER_RBE_Msk                       (_UINT32_(0xF) << ICM_IER_RBE_Pos)                   /* (ICM_IER) Region Bus Error Interrupt Enable Mask */
#define ICM_IER_RBE(value)                    (ICM_IER_RBE_Msk & (_UINT32_(value) << ICM_IER_RBE_Pos)) /* Assigment of value for RBE in the ICM_IER register */
#define ICM_IER_RWC_Pos                       _UINT32_(12)                                         /* (ICM_IER) Region Wrap Condition detected Interrupt Enable Position */
#define ICM_IER_RWC_Msk                       (_UINT32_(0xF) << ICM_IER_RWC_Pos)                   /* (ICM_IER) Region Wrap Condition detected Interrupt Enable Mask */
#define ICM_IER_RWC(value)                    (ICM_IER_RWC_Msk & (_UINT32_(value) << ICM_IER_RWC_Pos)) /* Assigment of value for RWC in the ICM_IER register */
#define ICM_IER_REC_Pos                       _UINT32_(16)                                         /* (ICM_IER) Region End bit Condition Detected Interrupt Enable Position */
#define ICM_IER_REC_Msk                       (_UINT32_(0xF) << ICM_IER_REC_Pos)                   /* (ICM_IER) Region End bit Condition Detected Interrupt Enable Mask */
#define ICM_IER_REC(value)                    (ICM_IER_REC_Msk & (_UINT32_(value) << ICM_IER_REC_Pos)) /* Assigment of value for REC in the ICM_IER register */
#define ICM_IER_RSU_Pos                       _UINT32_(20)                                         /* (ICM_IER) Region Status Updated Interrupt Disable Position */
#define ICM_IER_RSU_Msk                       (_UINT32_(0xF) << ICM_IER_RSU_Pos)                   /* (ICM_IER) Region Status Updated Interrupt Disable Mask */
#define ICM_IER_RSU(value)                    (ICM_IER_RSU_Msk & (_UINT32_(value) << ICM_IER_RSU_Pos)) /* Assigment of value for RSU in the ICM_IER register */
#define ICM_IER_URAD_Pos                      _UINT32_(24)                                         /* (ICM_IER) Undefined Register Access Detection Interrupt Enable Position */
#define ICM_IER_URAD_Msk                      (_UINT32_(0x1) << ICM_IER_URAD_Pos)                  /* (ICM_IER) Undefined Register Access Detection Interrupt Enable Mask */
#define ICM_IER_URAD(value)                   (ICM_IER_URAD_Msk & (_UINT32_(value) << ICM_IER_URAD_Pos)) /* Assigment of value for URAD in the ICM_IER register */
#define ICM_IER_Msk                           _UINT32_(0x01FFFFFF)                                 /* (ICM_IER) Register Mask  */


/* -------- ICM_IDR : (ICM Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define ICM_IDR_RHC_Pos                       _UINT32_(0)                                          /* (ICM_IDR) Region Hash Completed Interrupt Disable Position */
#define ICM_IDR_RHC_Msk                       (_UINT32_(0xF) << ICM_IDR_RHC_Pos)                   /* (ICM_IDR) Region Hash Completed Interrupt Disable Mask */
#define ICM_IDR_RHC(value)                    (ICM_IDR_RHC_Msk & (_UINT32_(value) << ICM_IDR_RHC_Pos)) /* Assigment of value for RHC in the ICM_IDR register */
#define ICM_IDR_RDM_Pos                       _UINT32_(4)                                          /* (ICM_IDR) Region Digest Mismatch Interrupt Disable Position */
#define ICM_IDR_RDM_Msk                       (_UINT32_(0xF) << ICM_IDR_RDM_Pos)                   /* (ICM_IDR) Region Digest Mismatch Interrupt Disable Mask */
#define ICM_IDR_RDM(value)                    (ICM_IDR_RDM_Msk & (_UINT32_(value) << ICM_IDR_RDM_Pos)) /* Assigment of value for RDM in the ICM_IDR register */
#define ICM_IDR_RBE_Pos                       _UINT32_(8)                                          /* (ICM_IDR) Region Bus Error Interrupt Disable Position */
#define ICM_IDR_RBE_Msk                       (_UINT32_(0xF) << ICM_IDR_RBE_Pos)                   /* (ICM_IDR) Region Bus Error Interrupt Disable Mask */
#define ICM_IDR_RBE(value)                    (ICM_IDR_RBE_Msk & (_UINT32_(value) << ICM_IDR_RBE_Pos)) /* Assigment of value for RBE in the ICM_IDR register */
#define ICM_IDR_RWC_Pos                       _UINT32_(12)                                         /* (ICM_IDR) Region Wrap Condition Detected Interrupt Disable Position */
#define ICM_IDR_RWC_Msk                       (_UINT32_(0xF) << ICM_IDR_RWC_Pos)                   /* (ICM_IDR) Region Wrap Condition Detected Interrupt Disable Mask */
#define ICM_IDR_RWC(value)                    (ICM_IDR_RWC_Msk & (_UINT32_(value) << ICM_IDR_RWC_Pos)) /* Assigment of value for RWC in the ICM_IDR register */
#define ICM_IDR_REC_Pos                       _UINT32_(16)                                         /* (ICM_IDR) Region End bit Condition detected Interrupt Disable Position */
#define ICM_IDR_REC_Msk                       (_UINT32_(0xF) << ICM_IDR_REC_Pos)                   /* (ICM_IDR) Region End bit Condition detected Interrupt Disable Mask */
#define ICM_IDR_REC(value)                    (ICM_IDR_REC_Msk & (_UINT32_(value) << ICM_IDR_REC_Pos)) /* Assigment of value for REC in the ICM_IDR register */
#define ICM_IDR_RSU_Pos                       _UINT32_(20)                                         /* (ICM_IDR) Region Status Updated Interrupt Disable Position */
#define ICM_IDR_RSU_Msk                       (_UINT32_(0xF) << ICM_IDR_RSU_Pos)                   /* (ICM_IDR) Region Status Updated Interrupt Disable Mask */
#define ICM_IDR_RSU(value)                    (ICM_IDR_RSU_Msk & (_UINT32_(value) << ICM_IDR_RSU_Pos)) /* Assigment of value for RSU in the ICM_IDR register */
#define ICM_IDR_URAD_Pos                      _UINT32_(24)                                         /* (ICM_IDR) Undefined Register Access Detection Interrupt Disable Position */
#define ICM_IDR_URAD_Msk                      (_UINT32_(0x1) << ICM_IDR_URAD_Pos)                  /* (ICM_IDR) Undefined Register Access Detection Interrupt Disable Mask */
#define ICM_IDR_URAD(value)                   (ICM_IDR_URAD_Msk & (_UINT32_(value) << ICM_IDR_URAD_Pos)) /* Assigment of value for URAD in the ICM_IDR register */
#define ICM_IDR_Msk                           _UINT32_(0x01FFFFFF)                                 /* (ICM_IDR) Register Mask  */


/* -------- ICM_IMR : (ICM Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define ICM_IMR_RHC_Pos                       _UINT32_(0)                                          /* (ICM_IMR) Region Hash Completed Interrupt Mask Position */
#define ICM_IMR_RHC_Msk                       (_UINT32_(0xF) << ICM_IMR_RHC_Pos)                   /* (ICM_IMR) Region Hash Completed Interrupt Mask Mask */
#define ICM_IMR_RHC(value)                    (ICM_IMR_RHC_Msk & (_UINT32_(value) << ICM_IMR_RHC_Pos)) /* Assigment of value for RHC in the ICM_IMR register */
#define ICM_IMR_RDM_Pos                       _UINT32_(4)                                          /* (ICM_IMR) Region Digest Mismatch Interrupt Mask Position */
#define ICM_IMR_RDM_Msk                       (_UINT32_(0xF) << ICM_IMR_RDM_Pos)                   /* (ICM_IMR) Region Digest Mismatch Interrupt Mask Mask */
#define ICM_IMR_RDM(value)                    (ICM_IMR_RDM_Msk & (_UINT32_(value) << ICM_IMR_RDM_Pos)) /* Assigment of value for RDM in the ICM_IMR register */
#define ICM_IMR_RBE_Pos                       _UINT32_(8)                                          /* (ICM_IMR) Region Bus Error Interrupt Mask Position */
#define ICM_IMR_RBE_Msk                       (_UINT32_(0xF) << ICM_IMR_RBE_Pos)                   /* (ICM_IMR) Region Bus Error Interrupt Mask Mask */
#define ICM_IMR_RBE(value)                    (ICM_IMR_RBE_Msk & (_UINT32_(value) << ICM_IMR_RBE_Pos)) /* Assigment of value for RBE in the ICM_IMR register */
#define ICM_IMR_RWC_Pos                       _UINT32_(12)                                         /* (ICM_IMR) Region Wrap Condition Detected Interrupt Mask Position */
#define ICM_IMR_RWC_Msk                       (_UINT32_(0xF) << ICM_IMR_RWC_Pos)                   /* (ICM_IMR) Region Wrap Condition Detected Interrupt Mask Mask */
#define ICM_IMR_RWC(value)                    (ICM_IMR_RWC_Msk & (_UINT32_(value) << ICM_IMR_RWC_Pos)) /* Assigment of value for RWC in the ICM_IMR register */
#define ICM_IMR_REC_Pos                       _UINT32_(16)                                         /* (ICM_IMR) Region End bit Condition Detected Interrupt Mask Position */
#define ICM_IMR_REC_Msk                       (_UINT32_(0xF) << ICM_IMR_REC_Pos)                   /* (ICM_IMR) Region End bit Condition Detected Interrupt Mask Mask */
#define ICM_IMR_REC(value)                    (ICM_IMR_REC_Msk & (_UINT32_(value) << ICM_IMR_REC_Pos)) /* Assigment of value for REC in the ICM_IMR register */
#define ICM_IMR_RSU_Pos                       _UINT32_(20)                                         /* (ICM_IMR) Region Status Updated Interrupt Mask Position */
#define ICM_IMR_RSU_Msk                       (_UINT32_(0xF) << ICM_IMR_RSU_Pos)                   /* (ICM_IMR) Region Status Updated Interrupt Mask Mask */
#define ICM_IMR_RSU(value)                    (ICM_IMR_RSU_Msk & (_UINT32_(value) << ICM_IMR_RSU_Pos)) /* Assigment of value for RSU in the ICM_IMR register */
#define ICM_IMR_URAD_Pos                      _UINT32_(24)                                         /* (ICM_IMR) Undefined Register Access Detection Interrupt Mask Position */
#define ICM_IMR_URAD_Msk                      (_UINT32_(0x1) << ICM_IMR_URAD_Pos)                  /* (ICM_IMR) Undefined Register Access Detection Interrupt Mask Mask */
#define ICM_IMR_URAD(value)                   (ICM_IMR_URAD_Msk & (_UINT32_(value) << ICM_IMR_URAD_Pos)) /* Assigment of value for URAD in the ICM_IMR register */
#define ICM_IMR_Msk                           _UINT32_(0x01FFFFFF)                                 /* (ICM_IMR) Register Mask  */


/* -------- ICM_ISR : (ICM Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define ICM_ISR_RHC_Pos                       _UINT32_(0)                                          /* (ICM_ISR) Region Hash Completed Position */
#define ICM_ISR_RHC_Msk                       (_UINT32_(0xF) << ICM_ISR_RHC_Pos)                   /* (ICM_ISR) Region Hash Completed Mask */
#define ICM_ISR_RHC(value)                    (ICM_ISR_RHC_Msk & (_UINT32_(value) << ICM_ISR_RHC_Pos)) /* Assigment of value for RHC in the ICM_ISR register */
#define ICM_ISR_RDM_Pos                       _UINT32_(4)                                          /* (ICM_ISR) Region Digest Mismatch Position */
#define ICM_ISR_RDM_Msk                       (_UINT32_(0xF) << ICM_ISR_RDM_Pos)                   /* (ICM_ISR) Region Digest Mismatch Mask */
#define ICM_ISR_RDM(value)                    (ICM_ISR_RDM_Msk & (_UINT32_(value) << ICM_ISR_RDM_Pos)) /* Assigment of value for RDM in the ICM_ISR register */
#define ICM_ISR_RBE_Pos                       _UINT32_(8)                                          /* (ICM_ISR) Region Bus Error Position */
#define ICM_ISR_RBE_Msk                       (_UINT32_(0xF) << ICM_ISR_RBE_Pos)                   /* (ICM_ISR) Region Bus Error Mask */
#define ICM_ISR_RBE(value)                    (ICM_ISR_RBE_Msk & (_UINT32_(value) << ICM_ISR_RBE_Pos)) /* Assigment of value for RBE in the ICM_ISR register */
#define ICM_ISR_RWC_Pos                       _UINT32_(12)                                         /* (ICM_ISR) Region Wrap Condition Detected Position */
#define ICM_ISR_RWC_Msk                       (_UINT32_(0xF) << ICM_ISR_RWC_Pos)                   /* (ICM_ISR) Region Wrap Condition Detected Mask */
#define ICM_ISR_RWC(value)                    (ICM_ISR_RWC_Msk & (_UINT32_(value) << ICM_ISR_RWC_Pos)) /* Assigment of value for RWC in the ICM_ISR register */
#define ICM_ISR_REC_Pos                       _UINT32_(16)                                         /* (ICM_ISR) Region End Bit Condition Detected Position */
#define ICM_ISR_REC_Msk                       (_UINT32_(0xF) << ICM_ISR_REC_Pos)                   /* (ICM_ISR) Region End Bit Condition Detected Mask */
#define ICM_ISR_REC(value)                    (ICM_ISR_REC_Msk & (_UINT32_(value) << ICM_ISR_REC_Pos)) /* Assigment of value for REC in the ICM_ISR register */
#define ICM_ISR_RSU_Pos                       _UINT32_(20)                                         /* (ICM_ISR) Region Status Updated Detected Position */
#define ICM_ISR_RSU_Msk                       (_UINT32_(0xF) << ICM_ISR_RSU_Pos)                   /* (ICM_ISR) Region Status Updated Detected Mask */
#define ICM_ISR_RSU(value)                    (ICM_ISR_RSU_Msk & (_UINT32_(value) << ICM_ISR_RSU_Pos)) /* Assigment of value for RSU in the ICM_ISR register */
#define ICM_ISR_URAD_Pos                      _UINT32_(24)                                         /* (ICM_ISR) Undefined Register Access Detection Status Position */
#define ICM_ISR_URAD_Msk                      (_UINT32_(0x1) << ICM_ISR_URAD_Pos)                  /* (ICM_ISR) Undefined Register Access Detection Status Mask */
#define ICM_ISR_URAD(value)                   (ICM_ISR_URAD_Msk & (_UINT32_(value) << ICM_ISR_URAD_Pos)) /* Assigment of value for URAD in the ICM_ISR register */
#define ICM_ISR_Msk                           _UINT32_(0x01FFFFFF)                                 /* (ICM_ISR) Register Mask  */


/* -------- ICM_UASR : (ICM Offset: 0x20) ( R/ 32) Undefined Access Status Register -------- */
#define ICM_UASR_URAT_Pos                     _UINT32_(0)                                          /* (ICM_UASR) Undefined Register Access Trace Position */
#define ICM_UASR_URAT_Msk                     (_UINT32_(0x7) << ICM_UASR_URAT_Pos)                 /* (ICM_UASR) Undefined Register Access Trace Mask */
#define ICM_UASR_URAT(value)                  (ICM_UASR_URAT_Msk & (_UINT32_(value) << ICM_UASR_URAT_Pos)) /* Assigment of value for URAT in the ICM_UASR register */
#define   ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER_Val _UINT32_(0x0)                                        /* (ICM_UASR) Unspecified structure member set to one detected when the descriptor is loaded.  */
#define   ICM_UASR_URAT_ICM_CFG_MODIFIED_Val  _UINT32_(0x1)                                        /* (ICM_UASR) ICM_CFG modified during active monitoring.  */
#define   ICM_UASR_URAT_ICM_DSCR_MODIFIED_Val _UINT32_(0x2)                                        /* (ICM_UASR) ICM_DSCR modified during active monitoring.  */
#define   ICM_UASR_URAT_ICM_HASH_MODIFIED_Val _UINT32_(0x3)                                        /* (ICM_UASR) ICM_HASH modified during active monitoring  */
#define   ICM_UASR_URAT_READ_ACCESS_Val       _UINT32_(0x4)                                        /* (ICM_UASR) Write-only register read access  */
#define ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER    (ICM_UASR_URAT_UNSPEC_STRUCT_MEMBER_Val << ICM_UASR_URAT_Pos) /* (ICM_UASR) Unspecified structure member set to one detected when the descriptor is loaded. Position  */
#define ICM_UASR_URAT_ICM_CFG_MODIFIED        (ICM_UASR_URAT_ICM_CFG_MODIFIED_Val << ICM_UASR_URAT_Pos) /* (ICM_UASR) ICM_CFG modified during active monitoring. Position  */
#define ICM_UASR_URAT_ICM_DSCR_MODIFIED       (ICM_UASR_URAT_ICM_DSCR_MODIFIED_Val << ICM_UASR_URAT_Pos) /* (ICM_UASR) ICM_DSCR modified during active monitoring. Position  */
#define ICM_UASR_URAT_ICM_HASH_MODIFIED       (ICM_UASR_URAT_ICM_HASH_MODIFIED_Val << ICM_UASR_URAT_Pos) /* (ICM_UASR) ICM_HASH modified during active monitoring Position  */
#define ICM_UASR_URAT_READ_ACCESS             (ICM_UASR_URAT_READ_ACCESS_Val << ICM_UASR_URAT_Pos) /* (ICM_UASR) Write-only register read access Position  */
#define ICM_UASR_Msk                          _UINT32_(0x00000007)                                 /* (ICM_UASR) Register Mask  */


/* -------- ICM_DSCR : (ICM Offset: 0x30) (R/W 32) Region Descriptor Area Start Address Register -------- */
#define ICM_DSCR_DASA_Pos                     _UINT32_(6)                                          /* (ICM_DSCR) Descriptor Area Start Address Position */
#define ICM_DSCR_DASA_Msk                     (_UINT32_(0x3FFFFFF) << ICM_DSCR_DASA_Pos)           /* (ICM_DSCR) Descriptor Area Start Address Mask */
#define ICM_DSCR_DASA(value)                  (ICM_DSCR_DASA_Msk & (_UINT32_(value) << ICM_DSCR_DASA_Pos)) /* Assigment of value for DASA in the ICM_DSCR register */
#define ICM_DSCR_Msk                          _UINT32_(0xFFFFFFC0)                                 /* (ICM_DSCR) Register Mask  */


/* -------- ICM_HASH : (ICM Offset: 0x34) (R/W 32) Region Hash Area Start Address Register -------- */
#define ICM_HASH_HASA_Pos                     _UINT32_(8)                                          /* (ICM_HASH) Hash Area Start Address Position */
#define ICM_HASH_HASA_Msk                     (_UINT32_(0xFFFFFF) << ICM_HASH_HASA_Pos)            /* (ICM_HASH) Hash Area Start Address Mask */
#define ICM_HASH_HASA(value)                  (ICM_HASH_HASA_Msk & (_UINT32_(value) << ICM_HASH_HASA_Pos)) /* Assigment of value for HASA in the ICM_HASH register */
#define ICM_HASH_Msk                          _UINT32_(0xFFFFFF00)                                 /* (ICM_HASH) Register Mask  */


/* -------- ICM_UIHVAL : (ICM Offset: 0x38) ( /W 32) User Initial Hash Value 0 Register -------- */
#define ICM_UIHVAL_VAL_Pos                    _UINT32_(0)                                          /* (ICM_UIHVAL) Initial Hash Value Position */
#define ICM_UIHVAL_VAL_Msk                    (_UINT32_(0xFFFFFFFF) << ICM_UIHVAL_VAL_Pos)         /* (ICM_UIHVAL) Initial Hash Value Mask */
#define ICM_UIHVAL_VAL(value)                 (ICM_UIHVAL_VAL_Msk & (_UINT32_(value) << ICM_UIHVAL_VAL_Pos)) /* Assigment of value for VAL in the ICM_UIHVAL register */
#define ICM_UIHVAL_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (ICM_UIHVAL) Register Mask  */


/* -------- ICM_WPMR : (ICM Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ICM_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (ICM_WPMR) Write Protection Enable Position */
#define ICM_WPMR_WPEN_Msk                     (_UINT32_(0x1) << ICM_WPMR_WPEN_Pos)                 /* (ICM_WPMR) Write Protection Enable Mask */
#define ICM_WPMR_WPEN(value)                  (ICM_WPMR_WPEN_Msk & (_UINT32_(value) << ICM_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the ICM_WPMR register */
#define ICM_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (ICM_WPMR) Write Protection Interrupt Enable Position */
#define ICM_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << ICM_WPMR_WPITEN_Pos)               /* (ICM_WPMR) Write Protection Interrupt Enable Mask */
#define ICM_WPMR_WPITEN(value)                (ICM_WPMR_WPITEN_Msk & (_UINT32_(value) << ICM_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the ICM_WPMR register */
#define ICM_WPMR_WPCREN_Pos                   _UINT32_(2)                                          /* (ICM_WPMR) Write Protection Control Enable Position */
#define ICM_WPMR_WPCREN_Msk                   (_UINT32_(0x1) << ICM_WPMR_WPCREN_Pos)               /* (ICM_WPMR) Write Protection Control Enable Mask */
#define ICM_WPMR_WPCREN(value)                (ICM_WPMR_WPCREN_Msk & (_UINT32_(value) << ICM_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the ICM_WPMR register */
#define ICM_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (ICM_WPMR) Write Protection Key Position */
#define ICM_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << ICM_WPMR_WPKEY_Pos)           /* (ICM_WPMR) Write Protection Key Mask */
#define ICM_WPMR_WPKEY(value)                 (ICM_WPMR_WPKEY_Msk & (_UINT32_(value) << ICM_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the ICM_WPMR register */
#define   ICM_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x49434D)                                   /* (ICM_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads as 0  */
#define ICM_WPMR_WPKEY_PASSWD                 (ICM_WPMR_WPKEY_PASSWD_Val << ICM_WPMR_WPKEY_Pos)    /* (ICM_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always reads as 0 Position  */
#define ICM_WPMR_Msk                          _UINT32_(0xFFFFFF07)                                 /* (ICM_WPMR) Register Mask  */


/* -------- ICM_WPSR : (ICM Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define ICM_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (ICM_WPSR) Write Protection Violation Status (Cleared on read) Position */
#define ICM_WPSR_WPVS_Msk                     (_UINT32_(0x1) << ICM_WPSR_WPVS_Pos)                 /* (ICM_WPSR) Write Protection Violation Status (Cleared on read) Mask */
#define ICM_WPSR_WPVS(value)                  (ICM_WPSR_WPVS_Msk & (_UINT32_(value) << ICM_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the ICM_WPSR register */
#define ICM_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (ICM_WPSR) Write Protection Violation Source Position */
#define ICM_WPSR_WPVSRC_Msk                   (_UINT32_(0xFF) << ICM_WPSR_WPVSRC_Pos)              /* (ICM_WPSR) Write Protection Violation Source Mask */
#define ICM_WPSR_WPVSRC(value)                (ICM_WPSR_WPVSRC_Msk & (_UINT32_(value) << ICM_WPSR_WPVSRC_Pos)) /* Assigment of value for WPVSRC in the ICM_WPSR register */
#define ICM_WPSR_Msk                          _UINT32_(0x0000FF01)                                 /* (ICM_WPSR) Register Mask  */


/** \brief ICM register offsets definitions */
#define ICM_CFG_REG_OFST               _UINT32_(0x00)      /* (ICM_CFG) Configuration Register Offset */
#define ICM_CTRL_REG_OFST              _UINT32_(0x04)      /* (ICM_CTRL) Control Register Offset */
#define ICM_SR_REG_OFST                _UINT32_(0x08)      /* (ICM_SR) Status Register Offset */
#define ICM_IER_REG_OFST               _UINT32_(0x10)      /* (ICM_IER) Interrupt Enable Register Offset */
#define ICM_IDR_REG_OFST               _UINT32_(0x14)      /* (ICM_IDR) Interrupt Disable Register Offset */
#define ICM_IMR_REG_OFST               _UINT32_(0x18)      /* (ICM_IMR) Interrupt Mask Register Offset */
#define ICM_ISR_REG_OFST               _UINT32_(0x1C)      /* (ICM_ISR) Interrupt Status Register Offset */
#define ICM_UASR_REG_OFST              _UINT32_(0x20)      /* (ICM_UASR) Undefined Access Status Register Offset */
#define ICM_DSCR_REG_OFST              _UINT32_(0x30)      /* (ICM_DSCR) Region Descriptor Area Start Address Register Offset */
#define ICM_HASH_REG_OFST              _UINT32_(0x34)      /* (ICM_HASH) Region Hash Area Start Address Register Offset */
#define ICM_UIHVAL_REG_OFST            _UINT32_(0x38)      /* (ICM_UIHVAL) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL0_REG_OFST           _UINT32_(0x38)      /* (ICM_UIHVAL0) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL1_REG_OFST           _UINT32_(0x3C)      /* (ICM_UIHVAL1) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL2_REG_OFST           _UINT32_(0x40)      /* (ICM_UIHVAL2) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL3_REG_OFST           _UINT32_(0x44)      /* (ICM_UIHVAL3) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL4_REG_OFST           _UINT32_(0x48)      /* (ICM_UIHVAL4) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL5_REG_OFST           _UINT32_(0x4C)      /* (ICM_UIHVAL5) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL6_REG_OFST           _UINT32_(0x50)      /* (ICM_UIHVAL6) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL7_REG_OFST           _UINT32_(0x54)      /* (ICM_UIHVAL7) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL8_REG_OFST           _UINT32_(0x58)      /* (ICM_UIHVAL8) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL9_REG_OFST           _UINT32_(0x5C)      /* (ICM_UIHVAL9) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL10_REG_OFST          _UINT32_(0x60)      /* (ICM_UIHVAL10) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL11_REG_OFST          _UINT32_(0x64)      /* (ICM_UIHVAL11) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL12_REG_OFST          _UINT32_(0x68)      /* (ICM_UIHVAL12) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL13_REG_OFST          _UINT32_(0x6C)      /* (ICM_UIHVAL13) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL14_REG_OFST          _UINT32_(0x70)      /* (ICM_UIHVAL14) User Initial Hash Value 0 Register Offset */
#define ICM_UIHVAL15_REG_OFST          _UINT32_(0x74)      /* (ICM_UIHVAL15) User Initial Hash Value 0 Register Offset */
#define ICM_WPMR_REG_OFST              _UINT32_(0xE4)      /* (ICM_WPMR) Write Protection Mode Register Offset */
#define ICM_WPSR_REG_OFST              _UINT32_(0xE8)      /* (ICM_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief ICM register API structure */
typedef struct
{
  __IO  uint32_t                       ICM_CFG;            /**< Offset: 0x00 (R/W  32) Configuration Register */
  __O   uint32_t                       ICM_CTRL;           /**< Offset: 0x04 ( /W  32) Control Register */
  __I   uint32_t                       ICM_SR;             /**< Offset: 0x08 (R/   32) Status Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       ICM_IER;            /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ICM_IDR;            /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ICM_IMR;            /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ICM_ISR;            /**< Offset: 0x1C (R/   32) Interrupt Status Register */
  __I   uint32_t                       ICM_UASR;           /**< Offset: 0x20 (R/   32) Undefined Access Status Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       ICM_DSCR;           /**< Offset: 0x30 (R/W  32) Region Descriptor Area Start Address Register */
  __IO  uint32_t                       ICM_HASH;           /**< Offset: 0x34 (R/W  32) Region Hash Area Start Address Register */
  __O   uint32_t                       ICM_UIHVAL[16];     /**< Offset: 0x38 ( /W  32) User Initial Hash Value 0 Register */
  __I   uint8_t                        Reserved3[0x6C];
  __IO  uint32_t                       ICM_WPMR;           /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ICM_WPSR;           /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
} icm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CXMTSH_ICM_COMPONENT_H_ */
