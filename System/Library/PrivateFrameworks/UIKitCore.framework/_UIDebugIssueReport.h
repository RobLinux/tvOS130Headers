/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDebugIssueReporting.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {

	NSMutableArray* _mutableIssues;

}

@property (nonatomic,copy,readonly) NSArray * issues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)issues;
-(void)addIssue:(id)arg1 ;
@end
