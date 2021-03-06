/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFActionEnvironment : NSObject

@property (nonatomic,readonly) BOOL isMemoryConstrained; 
@property (nonatomic,readonly) BOOL isWatchOS; 
@property (nonatomic,readonly) BOOL isAppExtension; 
+(id)currentEnvironment;
+(id)environmentForWorkflowType:(id)arg1 ;
-(BOOL)isAppExtension;
-(BOOL)isMemoryConstrained;
-(BOOL)isWatchOS;
@end

