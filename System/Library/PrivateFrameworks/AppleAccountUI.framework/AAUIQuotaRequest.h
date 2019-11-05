/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest {

	ACAccount* _account;
	BOOL _isDetailedRequest;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(id)urlRequest;
-(id)initDetailedRequestWithAccount:(id)arg1 ;
@end

