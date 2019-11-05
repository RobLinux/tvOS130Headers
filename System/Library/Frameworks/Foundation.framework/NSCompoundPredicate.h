/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned long long _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(BOOL)supportsSecureCoding;
+(id)_operatorForType:(unsigned long long)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(BOOL)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 addressBook:(void*)arg3 propertyIndices:(const _CFDictionary*)arg4 ;
-(void)ab_addCallbackContextToArray:(id)arg1 ;
-(void)ab_bindSelectClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)generateMetadataDescription;
-(unsigned long long)compoundPredicateType;
-(NSArray *)subpredicates;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)predicateOperator;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)_predicateOperator;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(id)_copySubpredicateDescription:(id)arg1 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
@end

