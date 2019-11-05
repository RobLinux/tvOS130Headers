/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSObject {

	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned char _propertyType;
	unsigned char _sqlType;
	unsigned short _fetchIndex;
	unsigned short _slot;
	struct {
		unsigned _allowAliasing : 1;
		unsigned _unique : 1;
		unsigned _constrained : 1;
		unsigned _backedByTrigger : 1;
		unsigned _isDerivedAttribute : 1;
		unsigned _reservedFlags : 11;
	}  _flags;

}

@property (assign,getter=isConstrained,nonatomic) BOOL constrained; 
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)isConstrained;
-(void)setConstrained:(BOOL)arg1 ;
-(unsigned)slot;
-(id)entity;
-(id)propertyDescription;
-(BOOL)isToMany;
-(BOOL)isToOne;
-(BOOL)isManyToMany;
-(id)columnName;
-(unsigned char)propertyType;
-(BOOL)isAttribute;
-(unsigned char)sqlType;
-(id)externalName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isColumn;
-(BOOL)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(BOOL)isUnique;
-(BOOL)isPrimaryKey;
-(void)setPropertyDescription:(id)arg1 ;
-(BOOL)isForeignKey;
-(BOOL)isForeignEntityKey;
-(BOOL)isForeignOrderKey;
-(BOOL)isEntityKey;
-(BOOL)isOptLockKey;
@end

