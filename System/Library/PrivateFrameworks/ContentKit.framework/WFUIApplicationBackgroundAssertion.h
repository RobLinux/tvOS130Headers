/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFBackgroundAssertion.h>

@class NSString;

@interface WFUIApplicationBackgroundAssertion : WFBackgroundAssertion {

	unsigned long long _taskIdentifier;
	NSString* _taskName;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy) NSString * taskName;                              //@synthesize taskName=_taskName - In the implementation block
+(id)backgroundAssertionWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)end;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

