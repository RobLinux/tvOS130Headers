/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {

	NSArray* _authorizationOptions;

}

@property (nonatomic,copy) NSArray * authorizationOptions;              //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
-(NSArray *)authorizationOptions;
-(void)setAuthorizationOptions:(NSArray *)arg1 ;
@end

