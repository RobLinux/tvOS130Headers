/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/AMSURLParserBagContract.h>

@class AMSBagValue, SSURLBag, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract> {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * commerceUIURLPatterns; 
+(id)sharedContract;
-(id)init;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(AMSBagValue *)commerceUIURLPatterns;
@end

