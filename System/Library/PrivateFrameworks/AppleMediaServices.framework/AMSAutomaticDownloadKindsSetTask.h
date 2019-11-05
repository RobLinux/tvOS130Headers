/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <AppleMediaServices/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, NSArray, NSString;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSArray* _enabledMediaKinds;

}

@property (nonatomic,readonly) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSArray * enabledMediaKinds;              //@synthesize enabledMediaKinds=_enabledMediaKinds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(ACAccount *)account;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(NSArray *)enabledMediaKinds;
-(id)initWithEnabledMediaKinds:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
@end

