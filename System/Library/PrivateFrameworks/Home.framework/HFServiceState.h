/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HFServiceState : NSObject

@property (nonatomic,copy,readonly) NSString * stateTypeIdentifier; 
@property (nonatomic,readonly) long long primaryState; 
@property (nonatomic,readonly) long long priority; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
+(Class)stateClassForServiceDescriptor:(id)arg1 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
+(id)optionalCharacteristicTypes;
+(id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2 ;
-(BOOL)isTransitioning;
-(id)initWithBatchReadResponse:(id)arg1 ;
@end

