/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPredicate;

@interface _PTAppearanceCondition : NSObject {

	NSString* _conditionKeyPath;
	NSPredicate* _conditionPredicate;

}

@property (nonatomic,retain) NSString * conditionKeyPath;                   //@synthesize conditionKeyPath=_conditionKeyPath - In the implementation block
@property (nonatomic,retain) NSPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
+(id)appearanceConditionWithPredicate:(id)arg1 ;
-(void)addKeyPathPrefix:(id)arg1 ;
-(BOOL)evaluateWithSettings:(id)arg1 ;
-(void)setConditionPredicate:(NSPredicate *)arg1 ;
-(NSString *)conditionKeyPath;
-(void)setConditionKeyPath:(NSString *)arg1 ;
-(NSPredicate *)conditionPredicate;
@end

