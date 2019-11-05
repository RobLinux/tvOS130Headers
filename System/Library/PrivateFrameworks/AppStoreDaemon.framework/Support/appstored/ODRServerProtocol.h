/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRServerProtocol <NSObject>
@required
-(void)hello:(/*^block*/id)arg1;
-(void)beginODRSessionWithBundleURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)tagStateInBundle:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pinTags:(id)arg1 inBundle:(id)arg2 priority:(double)arg3 completionHandler:(/*^block*/id)arg4;
-(void)conditionallyPinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLoadingPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;
-(void)unpinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)okToPurgeAssetPacks:(id)arg1;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;
-(void)setAlwaysPreserved:(BOOL)arg1 forTags:(id)arg2 inBundle:(id)arg3;

@end

