/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFVariableProvider <NSObject>
@property (nonatomic,readonly) NSArray * availableVariableNames; 
@property (nonatomic,readonly) NSArray * availableOutputActions; 
@property (nonatomic,readonly) NSArray * workflowInputClasses; 
@required
-(BOOL)hasAvailableVariables;
-(BOOL)isVariableWithNameAvailable:(id)arg1;
-(id)possibleContentClassesForVariableNamed:(id)arg1 context:(id)arg2;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg1;
-(id)actionProvidingVariableWithOutputUUID:(id)arg1;
-(id)actionsProvidingVariableName:(id)arg1;
-(void)addVariableObserver:(id)arg1;
-(void)removeVariableObserver:(id)arg1;
-(NSArray *)availableVariableNames;
-(NSArray *)availableOutputActions;
-(NSArray *)workflowInputClasses;

@end

