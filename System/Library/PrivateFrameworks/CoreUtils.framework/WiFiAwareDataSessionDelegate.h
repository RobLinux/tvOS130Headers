/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareDataSessionDelegate <NSObject>
@required
-(void)dataSessionRequestStarted:(id)arg1;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;

@end

