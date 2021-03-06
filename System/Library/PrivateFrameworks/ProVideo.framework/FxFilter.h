/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxFilter <FxBaseEffect>
@optional
-(unsigned long long)numberOfFramesToScheduleAtRenderTime:(/*function pointer*/void**)arg1;
-(void)schedule:(unsigned long long)arg1 frames:(/*function pointer*/void**)arg2 forRenderAtTime:(/*function pointer*/void**)arg3;

@required
-(BOOL)frameSetup:(inout *)arg1 inputInfo:(SCD_Struct_PA77)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA77)arg3 withInfo:(inout *)arg4;
-(BOOL)frameCleanup;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(inout *)arg3;

@end

