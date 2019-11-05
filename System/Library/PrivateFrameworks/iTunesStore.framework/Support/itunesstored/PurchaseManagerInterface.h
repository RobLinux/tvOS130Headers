/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PurchaseManagerInterface <NSObject>
@optional
-(void)notifyAutenticationDialogCompleteForPurchaseID:(id)arg1 result:(long long)arg2 checkboxChecked:(BOOL)arg3 withResultHandler:(/*^block*/id)arg4;
-(void)notifyDialogCompleteForPurchaseID:(id)arg1 result:(BOOL)arg2 selectedButton:(long long)arg3 withResultHandler:(/*^block*/id)arg4;
-(void)startPurchase:(id)arg1 requestToken:(id)arg2 withReplyHandler:(/*^block*/id)arg3;

@required
-(void)processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(/*^block*/id)arg3;

@end

