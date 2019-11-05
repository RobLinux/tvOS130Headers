/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <HMFoundation/HMFLogging.h>

@class HMFLocationAuthorization, NSString;

@interface __HMFLocationAuthorizationRequest : HMFOperation <HMFLogging> {

	BOOL _requested;
	long long _type;
	HMFLocationAuthorization* _authorization;

}

@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (readonly) HMFLocationAuthorization * authorization;              //@synthesize authorization=_authorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)logCategory;
-(void)dealloc;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)main;
-(HMFLocationAuthorization *)authorization;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithType:(long long)arg1 authorization:(id)arg2 ;
@end

