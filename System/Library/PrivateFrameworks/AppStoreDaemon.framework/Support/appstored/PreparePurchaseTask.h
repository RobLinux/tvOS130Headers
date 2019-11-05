/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class PurchaseInfo;

@interface PreparePurchaseTask : Task {

	PurchaseInfo* _purchaseInfo;

}

@property (readonly) PurchaseInfo * purchaseInfo;              //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
+(id)_getInstalledAppUpdatePurchaseInfo:(id)arg1 ;
+(void)_setAccountIDForApp:(id)arg1 usingPurchaseInfo:(id)arg2 ;
-(void)completeWithError:(id)arg1 ;
-(void)main;
-(id)initWithPurchaseInfo:(id)arg1 ;
-(PurchaseInfo *)purchaseInfo;
@end
