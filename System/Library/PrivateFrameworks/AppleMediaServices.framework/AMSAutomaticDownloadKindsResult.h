/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSArray;

@interface AMSAutomaticDownloadKindsResult : NSObject {

	ACAccount* _account;
	NSArray* _enabledMediaKinds;

}

@property (nonatomic,readonly) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;              //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
-(ACAccount *)account;
-(NSArray *)enabledMediaKinds;
-(id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2 ;
@end

