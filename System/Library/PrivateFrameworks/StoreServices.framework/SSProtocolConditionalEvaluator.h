/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {

	SSProtocolConditionalContext* _context;
	NSDictionary* _dictionary;

}
+(id)defaultConditionalContext;
+(void)setDefaultConditionalContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2 ;
-(id)_dictionaryByEvaluatingWithForcedValue:(long long)arg1 ;
-(id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(long long)arg2 ;
-(id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(long long)arg2 ;
-(int)_logicalOperatorForString:(id)arg1 ;
-(BOOL)_checkConditions:(id)arg1 withOperator:(id)arg2 ;
-(id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(long long)arg2 ;
-(id)dictionaryByEvaluatingConditions;
-(id)dictionaryByRemovingConditions;
@end

