/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEChannelBlur : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA76*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA76*)arg1 inputInfo:(SCD_Struct_PA77)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA77)arg3 withInfo:(SCD_Struct_PA76*)arg4 ;
@end

