/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariable.h>

@interface WFClipboardVariable : WFVariable
+(void)setBackgroundClipboardRetriever:(/*^block*/id)arg1 ;
-(id)name;
-(id)icon;
-(BOOL)isAvailable;
-(id)initWithAggrandizements:(id)arg1 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(BOOL)requiresModernVariableSupport;
@end

