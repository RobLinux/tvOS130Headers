/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {

	CNContact* _userInfo;

}

@property (nonatomic,readonly) CNContact * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(CNContact *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(BOOL)arg3 ;
@end

