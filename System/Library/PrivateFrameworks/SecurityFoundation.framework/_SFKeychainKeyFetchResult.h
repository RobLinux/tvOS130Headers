/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class _SFSymmetricKey;

@interface _SFKeychainKeyFetchResult : _SFKeychainFetchResult {

	id _keyFetchResult;

}

@property (readonly) _SFSymmetricKey * value; 
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

