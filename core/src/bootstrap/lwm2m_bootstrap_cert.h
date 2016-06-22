/************************************************************************************************************************
 Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 following conditions are met:
     1. Redistributions of source code must retain the above copyright notice, this list of conditions and the
        following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
        following disclaimer in the documentation and/or other materials provided with the distribution.
     3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote
        products derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
 USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
************************************************************************************************************************/


#ifndef LWM2M_BOOTSTRAP_CERT_H_
#define LWM2M_BOOTSTRAP_CERT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

const unsigned char bootsrapCert[] = {
 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49, 0x4E, 0x20, 0x45, 0x43, 0x20, 0x50, 0x52,
 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0D, 0x0A,
 0x4D, 0x48, 0x63, 0x43, 0x41, 0x51, 0x45, 0x45, 0x49, 0x4F, 0x32, 0x70, 0x59, 0x6A, 0x69, 0x31,
 0x4A, 0x58, 0x55, 0x62, 0x4E, 0x45, 0x49, 0x4D, 0x4C, 0x32, 0x48, 0x6F, 0x35, 0x65, 0x46, 0x66,
 0x6B, 0x56, 0x44, 0x63, 0x6C, 0x56, 0x6C, 0x49, 0x65, 0x72, 0x50, 0x75, 0x4D, 0x58, 0x47, 0x39,
 0x4E, 0x6D, 0x74, 0x4B, 0x6F, 0x41, 0x6F, 0x47, 0x43, 0x43, 0x71, 0x47, 0x53, 0x4D, 0x34, 0x39,
 0x0D, 0x0A, 0x41, 0x77, 0x45, 0x48, 0x6F, 0x55, 0x51, 0x44, 0x51, 0x67, 0x41, 0x45, 0x6B, 0x52,
 0x57, 0x48, 0x69, 0x6C, 0x32, 0x57, 0x32, 0x32, 0x42, 0x53, 0x50, 0x73, 0x7A, 0x53, 0x6E, 0x6A,
 0x57, 0x56, 0x57, 0x69, 0x66, 0x4B, 0x4F, 0x38, 0x34, 0x6A, 0x6D, 0x53, 0x76, 0x71, 0x6B, 0x59,
 0x4C, 0x78, 0x4F, 0x6C, 0x74, 0x38, 0x76, 0x4B, 0x66, 0x66, 0x30, 0x34, 0x67, 0x56, 0x77, 0x6F,
 0x69, 0x77, 0x0D, 0x0A, 0x78, 0x4C, 0x74, 0x71, 0x50, 0x6E, 0x49, 0x42, 0x69, 0x50, 0x70, 0x73,
 0x73, 0x71, 0x72, 0x34, 0x67, 0x78, 0x68, 0x39, 0x43, 0x6D, 0x2B, 0x38, 0x39, 0x59, 0x5A, 0x38,
 0x55, 0x4C, 0x4D, 0x57, 0x65, 0x67, 0x3D, 0x3D, 0x0D, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45,
 0x4E, 0x44, 0x20, 0x45, 0x43, 0x20, 0x50, 0x52, 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45,
 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0D, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47,
 0x49, 0x4E, 0x20, 0x50, 0x55, 0x42, 0x4C, 0x49, 0x43, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D,
 0x2D, 0x2D, 0x0D, 0x0A, 0x4D, 0x46, 0x6B, 0x77, 0x45, 0x77, 0x59, 0x48, 0x4B, 0x6F, 0x5A, 0x49,
 0x7A, 0x6A, 0x30, 0x43, 0x41, 0x51, 0x59, 0x49, 0x4B, 0x6F, 0x5A, 0x49, 0x7A, 0x6A, 0x30, 0x44,
 0x41, 0x51, 0x63, 0x44, 0x51, 0x67, 0x41, 0x45, 0x6B, 0x52, 0x57, 0x48, 0x69, 0x6C, 0x32, 0x57,
 0x32, 0x32, 0x42, 0x53, 0x50, 0x73, 0x7A, 0x53, 0x6E, 0x6A, 0x57, 0x56, 0x57, 0x69, 0x66, 0x4B,
 0x4F, 0x38, 0x34, 0x6A, 0x0D, 0x0A, 0x6D, 0x53, 0x76, 0x71, 0x6B, 0x59, 0x4C, 0x78, 0x4F, 0x6C,
 0x74, 0x38, 0x76, 0x4B, 0x66, 0x66, 0x30, 0x34, 0x67, 0x56, 0x77, 0x6F, 0x69, 0x77, 0x78, 0x4C,
 0x74, 0x71, 0x50, 0x6E, 0x49, 0x42, 0x69, 0x50, 0x70, 0x73, 0x73, 0x71, 0x72, 0x34, 0x67, 0x78,
 0x68, 0x39, 0x43, 0x6D, 0x2B, 0x38, 0x39, 0x59, 0x5A, 0x38, 0x55, 0x4C, 0x4D, 0x57, 0x65, 0x67,
 0x3D, 0x3D, 0x0D, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45, 0x4E, 0x44, 0x20, 0x50, 0x55, 0x42,
 0x4C, 0x49, 0x43, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0D, 0x0A, 0x2D, 0x2D,
 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49, 0x4E, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49,
 0x43, 0x41, 0x54, 0x45, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0D, 0x0A, 0x4D, 0x49, 0x49, 0x43, 0x69,
 0x6A, 0x43, 0x43, 0x41, 0x6A, 0x43, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41, 0x67, 0x49, 0x49, 0x61,
 0x4B, 0x78, 0x54, 0x76, 0x33, 0x73, 0x43, 0x59, 0x62, 0x59, 0x77, 0x43, 0x67, 0x59, 0x49, 0x4B,
 0x6F, 0x5A, 0x49, 0x7A, 0x6A, 0x30, 0x45, 0x41, 0x77, 0x49, 0x77, 0x67, 0x59, 0x34, 0x78, 0x4A,
 0x44, 0x41, 0x69, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x4D, 0x4D, 0x0D, 0x0A, 0x47, 0x30, 0x6C,
 0x74, 0x59, 0x57, 0x64, 0x70, 0x62, 0x6D, 0x46, 0x30, 0x61, 0x57, 0x39, 0x75, 0x49, 0x46, 0x52,
 0x6C, 0x59, 0x32, 0x68, 0x75, 0x62, 0x32, 0x78, 0x76, 0x5A, 0x32, 0x6C, 0x6C, 0x63, 0x79, 0x42,
 0x44, 0x51, 0x54, 0x45, 0x70, 0x4D, 0x43, 0x63, 0x47, 0x41, 0x31, 0x55, 0x45, 0x43, 0x67, 0x77,
 0x67, 0x53, 0x57, 0x31, 0x68, 0x5A, 0x32, 0x6C, 0x75, 0x59, 0x58, 0x52, 0x70, 0x0D, 0x0A, 0x62,
 0x32, 0x34, 0x67, 0x56, 0x47, 0x56, 0x6A, 0x61, 0x47, 0x35, 0x76, 0x62, 0x47, 0x39, 0x6E, 0x61,
 0x57, 0x56, 0x7A, 0x49, 0x45, 0x78, 0x70, 0x62, 0x57, 0x6C, 0x30, 0x5A, 0x57, 0x51, 0x78, 0x46,
 0x6A, 0x41, 0x55, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x63, 0x4D, 0x44, 0x55, 0x74, 0x70, 0x62,
 0x6D, 0x64, 0x7A, 0x49, 0x45, 0x78, 0x68, 0x62, 0x6D, 0x64, 0x73, 0x5A, 0x58, 0x6B, 0x78, 0x0D,
 0x0A, 0x46, 0x6A, 0x41, 0x55, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x67, 0x4D, 0x44, 0x55, 0x68,
 0x6C, 0x63, 0x6E, 0x52, 0x6D, 0x62, 0x33, 0x4A, 0x6B, 0x63, 0x32, 0x68, 0x70, 0x63, 0x6D, 0x55,
 0x78, 0x43, 0x7A, 0x41, 0x4A, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x59, 0x54, 0x41, 0x6B, 0x64,
 0x43, 0x4D, 0x42, 0x34, 0x58, 0x44, 0x54, 0x45, 0x32, 0x4D, 0x44, 0x59, 0x79, 0x4D, 0x6A, 0x41,
 0x77, 0x0D, 0x0A, 0x4D, 0x44, 0x41, 0x77, 0x4D, 0x46, 0x6F, 0x58, 0x44, 0x54, 0x49, 0x78, 0x4D,
 0x44, 0x59, 0x79, 0x4D, 0x6A, 0x41, 0x77, 0x4D, 0x44, 0x41, 0x77, 0x4D, 0x46, 0x6F, 0x77, 0x67,
 0x59, 0x55, 0x78, 0x47, 0x7A, 0x41, 0x5A, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x4D, 0x4D, 0x45,
 0x6B, 0x6C, 0x4E, 0x52, 0x79, 0x42, 0x4D, 0x56, 0x30, 0x30, 0x79, 0x54, 0x53, 0x42, 0x43, 0x62,
 0x32, 0x39, 0x30, 0x0D, 0x0A, 0x63, 0x33, 0x4A, 0x68, 0x63, 0x44, 0x45, 0x70, 0x4D, 0x43, 0x63,
 0x47, 0x41, 0x31, 0x55, 0x45, 0x43, 0x67, 0x77, 0x67, 0x53, 0x57, 0x31, 0x68, 0x5A, 0x32, 0x6C,
 0x75, 0x59, 0x58, 0x52, 0x70, 0x62, 0x32, 0x34, 0x67, 0x56, 0x47, 0x56, 0x6A, 0x61, 0x47, 0x35,
 0x76, 0x62, 0x47, 0x39, 0x6E, 0x61, 0x57, 0x56, 0x7A, 0x49, 0x45, 0x78, 0x70, 0x62, 0x57, 0x6C,
 0x30, 0x5A, 0x57, 0x51, 0x78, 0x0D, 0x0A, 0x46, 0x6A, 0x41, 0x55, 0x42, 0x67, 0x4E, 0x56, 0x42,
 0x41, 0x63, 0x4D, 0x44, 0x55, 0x74, 0x70, 0x62, 0x6D, 0x64, 0x7A, 0x49, 0x45, 0x78, 0x68, 0x62,
 0x6D, 0x64, 0x73, 0x5A, 0x58, 0x6B, 0x78, 0x46, 0x6A, 0x41, 0x55, 0x42, 0x67, 0x4E, 0x56, 0x42,
 0x41, 0x67, 0x4D, 0x44, 0x55, 0x68, 0x6C, 0x63, 0x6E, 0x52, 0x6D, 0x62, 0x33, 0x4A, 0x6B, 0x63,
 0x32, 0x68, 0x70, 0x63, 0x6D, 0x55, 0x78, 0x0D, 0x0A, 0x43, 0x7A, 0x41, 0x4A, 0x42, 0x67, 0x4E,
 0x56, 0x42, 0x41, 0x59, 0x54, 0x41, 0x6B, 0x64, 0x43, 0x4D, 0x46, 0x6B, 0x77, 0x45, 0x77, 0x59,
 0x48, 0x4B, 0x6F, 0x5A, 0x49, 0x7A, 0x6A, 0x30, 0x43, 0x41, 0x51, 0x59, 0x49, 0x4B, 0x6F, 0x5A,
 0x49, 0x7A, 0x6A, 0x30, 0x44, 0x41, 0x51, 0x63, 0x44, 0x51, 0x67, 0x41, 0x45, 0x6B, 0x52, 0x57,
 0x48, 0x69, 0x6C, 0x32, 0x57, 0x32, 0x32, 0x42, 0x53, 0x0D, 0x0A, 0x50, 0x73, 0x7A, 0x53, 0x6E,
 0x6A, 0x57, 0x56, 0x57, 0x69, 0x66, 0x4B, 0x4F, 0x38, 0x34, 0x6A, 0x6D, 0x53, 0x76, 0x71, 0x6B,
 0x59, 0x4C, 0x78, 0x4F, 0x6C, 0x74, 0x38, 0x76, 0x4B, 0x66, 0x66, 0x30, 0x34, 0x67, 0x56, 0x77,
 0x6F, 0x69, 0x77, 0x78, 0x4C, 0x74, 0x71, 0x50, 0x6E, 0x49, 0x42, 0x69, 0x50, 0x70, 0x73, 0x73,
 0x71, 0x72, 0x34, 0x67, 0x78, 0x68, 0x39, 0x43, 0x6D, 0x2B, 0x38, 0x0D, 0x0A, 0x39, 0x59, 0x5A,
 0x38, 0x55, 0x4C, 0x4D, 0x57, 0x65, 0x71, 0x4E, 0x2F, 0x4D, 0x48, 0x30, 0x77, 0x44, 0x41, 0x59,
 0x44, 0x56, 0x52, 0x30, 0x54, 0x41, 0x51, 0x48, 0x2F, 0x42, 0x41, 0x49, 0x77, 0x41, 0x44, 0x41,
 0x4F, 0x42, 0x67, 0x4E, 0x56, 0x48, 0x51, 0x38, 0x42, 0x41, 0x66, 0x38, 0x45, 0x42, 0x41, 0x4D,
 0x43, 0x42, 0x61, 0x41, 0x77, 0x48, 0x51, 0x59, 0x44, 0x56, 0x52, 0x30, 0x6C, 0x0D, 0x0A, 0x42,
 0x42, 0x59, 0x77, 0x46, 0x41, 0x59, 0x49, 0x4B, 0x77, 0x59, 0x42, 0x42, 0x51, 0x55, 0x48, 0x41,
 0x77, 0x45, 0x47, 0x43, 0x43, 0x73, 0x47, 0x41, 0x51, 0x55, 0x46, 0x42, 0x77, 0x4D, 0x43, 0x4D,
 0x42, 0x30, 0x47, 0x41, 0x31, 0x55, 0x64, 0x44, 0x67, 0x51, 0x57, 0x42, 0x42, 0x54, 0x34, 0x79,
 0x4F, 0x61, 0x6A, 0x45, 0x36, 0x43, 0x74, 0x69, 0x67, 0x62, 0x39, 0x38, 0x57, 0x43, 0x4E, 0x0D,
 0x0A, 0x6F, 0x4A, 0x4C, 0x32, 0x61, 0x32, 0x4F, 0x66, 0x4E, 0x7A, 0x41, 0x66, 0x42, 0x67, 0x4E,
 0x56, 0x48, 0x53, 0x4D, 0x45, 0x47, 0x44, 0x41, 0x57, 0x67, 0x42, 0x54, 0x4D, 0x37, 0x4C, 0x39,
 0x4E, 0x33, 0x72, 0x4D, 0x42, 0x62, 0x38, 0x6D, 0x66, 0x64, 0x64, 0x4D, 0x31, 0x4F, 0x5A, 0x4E,
 0x57, 0x49, 0x4D, 0x39, 0x46, 0x2F, 0x7A, 0x41, 0x4B, 0x42, 0x67, 0x67, 0x71, 0x68, 0x6B, 0x6A,
 0x4F, 0x0D, 0x0A, 0x50, 0x51, 0x51, 0x44, 0x41, 0x67, 0x4E, 0x49, 0x41, 0x44, 0x42, 0x46, 0x41,
 0x69, 0x45, 0x41, 0x74, 0x54, 0x38, 0x47, 0x38, 0x63, 0x54, 0x48, 0x33, 0x59, 0x42, 0x75, 0x72,
 0x41, 0x6E, 0x56, 0x6D, 0x47, 0x43, 0x47, 0x65, 0x52, 0x52, 0x4E, 0x4D, 0x76, 0x48, 0x50, 0x5A,
 0x35, 0x70, 0x38, 0x70, 0x2B, 0x54, 0x47, 0x37, 0x66, 0x2B, 0x54, 0x6B, 0x49, 0x34, 0x43, 0x49,
 0x43, 0x71, 0x49, 0x0D, 0x0A, 0x41, 0x78, 0x66, 0x54, 0x65, 0x6D, 0x32, 0x78, 0x53, 0x36, 0x74,
 0x78, 0x71, 0x6E, 0x4D, 0x77, 0x30, 0x4E, 0x53, 0x36, 0x73, 0x51, 0x39, 0x67, 0x43, 0x47, 0x4C,
 0x48, 0x6E, 0x30, 0x35, 0x53, 0x7A, 0x6D, 0x6A, 0x4E, 0x4E, 0x72, 0x6F, 0x67, 0x0D, 0x0A, 0x2D,
 0x2D, 0x2D, 0x2D, 0x2D, 0x45, 0x4E, 0x44, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43,
 0x41, 0x54, 0x45, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0D, 0x0A,
};

#ifdef __cplusplus
}
#endif

#endif /* LWM2M_BOOTSTRAP_CERT_H_ */
