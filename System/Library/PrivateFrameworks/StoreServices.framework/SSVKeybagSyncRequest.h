/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;

}

@property (nonatomic,readonly) NSNumber * accountIdentifier;              //@synthesize accountID=_accountID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

