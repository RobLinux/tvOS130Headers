/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriExternalRequest.h>

@protocol OS_xpc_object;
@class NSObject;

@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {

	NSObject*<OS_xpc_object> _startRequestData;
	unsigned long long _requestOptions;

}
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2 ;
-(id)initWithStartRequest:(id)arg1 ;
@end

