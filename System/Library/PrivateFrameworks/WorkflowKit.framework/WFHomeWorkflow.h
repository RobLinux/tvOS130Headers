/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, WFWorkflow, HFTriggerActionsSetsUISummary, NSString, NSArray;

@interface WFHomeWorkflow : NSObject {

	NSData* _data;
	WFWorkflow* _workflow;
	HFTriggerActionsSetsUISummary* _actionSetsSummary;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerActionsSetsUISummary * actionSetsSummary;              //@synthesize actionSetsSummary=_actionSetsSummary - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString; 
@property (nonatomic,copy,readonly) NSArray * summaryIconNames; 
@property (nonatomic,copy,readonly) NSArray * summaryIconDescriptors; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(NSString *)summaryString;
-(BOOL)requiresDeviceUnlock;
-(NSArray *)summaryIconDescriptors;
-(HFTriggerActionsSetsUISummary *)actionSetsSummary;
-(NSArray *)summaryIconNames;
-(id)triggerActionSetsBuilders;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg1 ;
-(void)setActionSetsSummary:(HFTriggerActionsSetsUISummary *)arg1 ;
@end

