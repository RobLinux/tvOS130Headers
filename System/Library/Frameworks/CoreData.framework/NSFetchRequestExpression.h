/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression {

	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;
	NSExpression* _fetchRequest;
	NSExpression* _managedObjectContext;
	struct {
		unsigned isCountOnly : 1;
		unsigned _RESERVED : 31;
	}  _flags;

}

@property (readonly) NSExpression * requestExpression; 
@property (readonly) NSExpression * contextExpression; 
@property (getter=isCountOnlyRequest,readonly) BOOL countOnlyRequest; 
+(BOOL)supportsSecureCoding;
+(id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)expressionType;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)isCountOnlyRequest;
-(NSExpression *)requestExpression;
-(NSExpression *)contextExpression;
@end

