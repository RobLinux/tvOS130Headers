/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MMCSEngineDelegate <NSObject>
@optional
-(id)MMCSEngine:(id)arg1 didRequestAssetWithItemID:(unsigned long long)arg2;
-(BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;

@required
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
-(void)didFinishGettingAllAssets;

@end

