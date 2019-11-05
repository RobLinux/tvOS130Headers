/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAppInstalledResource.h>

@class INCIntentExecutionInfo;

@interface WFCustomIntentAvailableResource : WFAppInstalledResource {

	INCIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INCIntentExecutionInfo * executionInfo;              //@synthesize executionInfo=_executionInfo - In the implementation block
-(id)appIdentifier;
-(void)refreshAvailability;
-(INCIntentExecutionInfo *)executionInfo;
-(void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1 ;
@end
