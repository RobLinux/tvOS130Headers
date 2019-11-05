/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FxParameterRetrievalAPI_v5 <NSObject>
@required
-(BOOL)getFloatValue:(double*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getIntValue:(int*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getBoolValue:(BOOL*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned)arg3 atFxTime:(/*function pointer*/void**)arg4;
-(BOOL)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(inout *)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(inout *)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getParameterFlags:(unsigned*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getStringParameterValue:(id*)arg1 fromParm:(unsigned)arg2;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getPathID:(void*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;
-(BOOL)getFontName:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3;

@end

