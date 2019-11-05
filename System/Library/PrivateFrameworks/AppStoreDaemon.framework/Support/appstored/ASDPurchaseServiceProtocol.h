/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDPurchaseServiceProtocol
@required
-(void)adopt:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)adoptableBundleIdentifiersWithReplyHandler:(/*^block*/id)arg1;
-(void)processPurchase:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)startPurchase:(id)arg1 withReplyHandler:(/*^block*/id)arg2;
-(void)notifyAutenticationDialogCompleteForPurchaseID:(id)arg1 result:(long long)arg2 checkboxChecked:(BOOL)arg3 withResultHandler:(/*^block*/id)arg4;
-(void)notifyDialogCompleteForPurchaseID:(id)arg1 result:(BOOL)arg2 selectedButton:(long long)arg3 withResultHandler:(/*^block*/id)arg4;

@end

