/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)arg1 existingActions:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4 ;
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 ;
+(void)setStatusForAllAccessResourcesTo:(long long)arg1 inWorkflow:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4 ;
+(void)setAccessResourcesToAuthorizedIfNotDetermined:(id)arg1 otherActions:(id)arg2 ;
+(void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 existingAccessResources:(id)arg4 ;
@end

