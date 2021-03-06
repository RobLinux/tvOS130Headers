/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, AMSProcessInfo, NSNumber;

@interface PurchaseHistoryUpdateRequestContext : NSObject {

	long long _accountID;
	ACAccount* _requestingAccount;
	AMSProcessInfo* _clientInfo;
	NSNumber* _revision;
	unsigned long long _purchaseHistoryContext;

}

@property (readonly) long long accountID;                                    //@synthesize accountID=_accountID - In the implementation block
@property (readonly) ACAccount * requestingAccount;                          //@synthesize requestingAccount=_requestingAccount - In the implementation block
@property (readonly) AMSProcessInfo * clientInfo;                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (readonly) NSNumber * revision;                                    //@synthesize revision=_revision - In the implementation block
@property (readonly) unsigned long long purchaseHistoryContext;              //@synthesize purchaseHistoryContext=_purchaseHistoryContext - In the implementation block
+(id)newContextWithRevision:(id)arg1 forAccountID:(long long)arg2 requestingAccount:(id)arg3 client:(id)arg4 purchaseHistoryContext:(unsigned long long)arg5 ;
-(long long)accountID;
-(AMSProcessInfo *)clientInfo;
-(NSNumber *)revision;
-(ACAccount *)requestingAccount;
-(unsigned long long)purchaseHistoryContext;
-(id)_initWithRevision:(id)arg1 forAccountID:(long long)arg2 requestingAccount:(id)arg3 client:(id)arg4 purchaseHistoryContext:(unsigned long long)arg5 ;
@end

